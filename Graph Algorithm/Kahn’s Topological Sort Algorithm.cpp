#include <iostream>
#include<list>
#include<queue>
using namespace std;
 
//class representing a vertex of the graph
class Vertex{
public:
  //vertex label
  char name;
  //Adjacency List
  list<Vertex*> neighbors;
  //degree of the vertex
  int degree = 0;
  
 
  Vertex(char name){
    this->name = name;
  }
 
  //Method to connect vertices (directed)
  void add_neighbor(Vertex* v){
    this->neighbors.push_back(v);
  }
};
 

class KahnsTopological{
public:
  Vertex** vertices;
  int n;

  KahnsTopological(Vertex* vertices[], int n){
    this->vertices = vertices;
    this->n = n;
  }

  //method to initialize degree of every vertices
  void init_degree(){
    for(int i=0; i<n; i++){
      Vertex* vertex= vertices[i];
      for(Vertex* nbr: vertex->neighbors){
        nbr->degree += 1;
      }
    }
  }

  //method to find the topological order of the graph
  //using the kahn's Topological sort algorithm
  void sort(){
    //create an empty queue
    queue<Vertex*>  Queue;

    //fill queue with 0 degree vertices
    for(int i=0; i<n; i++){
      Vertex* vertex= vertices[i];
      if(vertex->degree == 0)
        Queue.push(vertex);
    }

    //list to store topological order
    list<Vertex*> order;

    //To store count of processed vertices
    int count = 0;

    //run the algorithm until queue is empty
    while(!Queue.empty()){
      //dequeue an vertex from the queue
      //and append to the order
      Vertex* current_vertex = Queue.front();
      Queue.pop();
      order.push_back(current_vertex);

      //decrement the degree of the connected vertices
      for(Vertex* nbr: current_vertex->neighbors){
        nbr->degree -= 1;

        //if the degree reduces to 0
        //add it to the queue
        if(nbr->degree == 0)
          Queue.push(nbr);
      }

      count++;
    }

    //algorithm has finished
    //if the number of processed vertices is greater-
    //than the number of vertices in the graph,
    //then it means the graph has a cycle
    if(count > n)
      cout << "The graph has cycle";
    else{
      //output the topological order
      for(Vertex* v: order){
        cout << v->name << " ";
      }
    }
  }
};


int main()
{
  //vertices
  Vertex* vertices[] = {new Vertex('A'), new Vertex('B'), new Vertex('C'), new Vertex('D'), new Vertex('E'), new Vertex('F')};
  
  //connect vertices (i.e. create graph)
  vertices[0]->add_neighbor(vertices[1]); //A->B
  vertices[0]->add_neighbor(vertices[2]); //A->C
  vertices[1]->add_neighbor(vertices[3]); //B->D
  vertices[2]->add_neighbor(vertices[3]); //C->D
  vertices[1]->add_neighbor(vertices[4]); //B->E
  vertices[2]->add_neighbor(vertices[5]); //C->F
  vertices[4]->add_neighbor(vertices[5]); //E->F
  
  //Driver Code
  KahnsTopological topological(vertices, 6);
  topological.init_degree();
  topological.sort();
}
