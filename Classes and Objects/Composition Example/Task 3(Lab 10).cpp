#include<iostream>
using namespace std;

class Point
{

int a;
int b;

public:

Point(int a,int b);
void Print();
~Point();



};

Point::Point(int a,int b)
{
this->a=a;
this->b=b;
cout<<"Point() called !"<<endl<<endl;
}

void Point::Print()
{

cout<<"("<<a<<","<<b<<")"<<endl;

}


Point::~Point()
{
   a=0;
   b=0;
   cout<<"~Point() called !"<<endl<<endl;
}

class Circle
{
    Point center;
    float radius;

public:

Circle(int x, int y, float r);
~Circle();
void print();

};

Circle::Circle(int x,int y,float r):center(x,y)
{
radius=r;
cout<<"Circle() called !"<<endl;
}


Circle::~Circle()
{

radius=0.0;
cout<<"~Circle() called !"<<endl;

}

void Circle::print()
{

cout<<endl<<"Center = ";
center.Print();
cout<<"Radius = "<<radius<<endl<<endl;

}


class Quad
{

    Point w;
    Point x;
    Point y;
    Point z;

public:

    Quad(int x1 ,int y1,int x2 ,int y2 ,int x3 ,int y3 ,int x4 ,int y4);
   ~Quad();
    void PRINT();

};

Quad::Quad(int x1 ,int y1,int x2 ,int y2 ,int x3 ,int y3 ,int x4 ,int y4):w(x1,y1),x(x2,y2),y(x3,y3),z(x4,y4)
{
    cout<<"Quadrilateral() Called!"<<endl;
}


 Quad::~Quad()
 {
     cout<<"~Quadrilateral() Called!"<<endl;
 }



void Quad::PRINT()
{
    cout<<endl;
     w.Print();
     x.Print();
     y.Print();
     z.Print();
    cout<<endl;
}





int main()
{


Circle c (3,4,2.5);
c.print();


cout<<endl<<endl;

Quad obj(1,0,0,1,1,1,0,0);
obj.PRINT();

}
