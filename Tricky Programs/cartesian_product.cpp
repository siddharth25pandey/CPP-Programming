include<iostream>
using namespace std;

int main()
{
    int set1[100],set2[100],n,m,i,j;


    cout<<"Enter the number of elements in Set 1 : ";
    cin>>n;
    cout<<"Enter the elements of Set 1 : ";
    for(i=0;i<n;i++)
    {
        cin>>set1[i];
    }


    cout<<"Enter the number of elements in Set 2 :";
    cin>>m;
    cout<<"Enter the elements of Set 2: ";
    for(i=0;i<m;i++)
    {
        cin>>set2[i];
    }

 
    cout<<"The cartesian product of two set is : "<<endl;
    cout<<"{";
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<"{"<<set1[i]<<","<<set2[j]<<"}";
        }
    }
    cout<<"}";

    return 0;
}
