#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <time.h>
using namespace std;

class Point
{
public:
	float x, y;
	Point()
	{
		x = 0;
		y = 0;
	}
	Point(int m, int n)
	{
		x = m;
		y = n;
	}
	void print()
	{
		printf("(%f,%f)\n", x, y);
	}
};

class Line
{
public:
	Point a, b;
	Line()
	{
	}
	Line(Point g, Point h)
	{
		a = g;
		b = h;
	}

public:
	void print()
	{
		a.print();
		b.print();
		printf("length - %f\n", sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y)));
	}
	
	int lineWidth=(1+rand()%2);
    int lineColour=(1+rand()%5);
	
	float getLength()
	{
		return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
	}
	
};

class Square
{
public:
	Line p, q, r, s;
	float l;
	Square( Line l1, Line l2,Line l3,Line l4)
	{
		p = l1;
		q = l2;
		r = l3;
		s = l4;
		l = l1.getLength();
	}
};

class Rectangle
{
public:
	Line p, q, r, s;
	float l,w;
	Rectangle(Line l1, Line l2, Line l3, Line l4)
	{
		p = l1;
		q = l2;
		r = l3;
		s = l4;
		l = l1.getLength() > l3.getLength() ? l1.getLength() : l3.getLength();
	    w = l1.getLength() < l3.getLength() ? l1.getLength() : l3.getLength();
	}
	float getPerimeter()
	{
		return 2*(l + w);
	}
	float getArea()
	{
		return (l*w);
	}
};

bool checkSquare(Line l1, Line l2, Line l3, Line l4)
{
	if ((l1.getLength() == l2.getLength() == l3.getLength() == l4.getLength()) || (l1.getLength() == l3.getLength() && l4.getLength() == l2.getLength()))
		printf("true"); 
	else
	    printf("false");
}

void findAreaSquare(int k)
{
	cout << "sqaure's area - " << k * k << "\n";
}
void findPerimeterSquare(int k)
{
	cout << "sqaure's perimeter - " << 4 * k << "\n";
}

int main()
{
	Point p1(rand() % 30, rand() % 30);
	Point p2(rand() % 20, rand() % 20);
	Line l1(p1, p2);
	l1.print();
	Point p3(rand() % 40, rand() % 40);
	Point p4(rand() % 50, rand() % 50);
	Line l2(p3, p4);
	Line l3(p1, p3);
	Line l4(p2, p4);
	cout << checkSquare(l1, l2, l3, l4) << "\n";
	Rectangle rect(l1, l2, l3, l4);
	cout << "rectangle's area - " << rect.getArea() << "\n";
	cout << "rectangle's perimeter - " << rect.getPerimeter() << "\n";
	findAreaSquare(l1.getLength());
	findPerimeterSquare(l1.getLength());
}