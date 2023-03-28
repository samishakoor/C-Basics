#include<iostream>
#include<cstring>
using namespace std;

class Tyre
{

private:
	int *width;
	int *aspect_ratio;
	int *diameter;

public:
//Constructors, Getters and Destructor

Tyre();
Tyre(int x,int y, int z);

int* getWidth();
int* getAspectRatio();
int* getDiameter();

~Tyre();


void PrintTyre();
};


Tyre::Tyre()
{

    width=NULL;
    aspect_ratio=NULL;
    diameter=NULL;

}

Tyre::Tyre(int x ,int y , int z)
{

     width = &x;
	 aspect_ratio = &y;
	 diameter = &z;

}
void Tyre::PrintTyre()
{
cout<<"Width = "<<*width<<endl;
cout<<"Aspect Ratio = "<<*aspect_ratio<<endl;;
cout<<"Diameter = "<<*diameter<<endl;
}


int* Tyre::getWidth()
{
return width;
}
int* Tyre::getAspectRatio()
{
return aspect_ratio;
}
int* Tyre::getDiameter()
{
return diameter;
}

Tyre::~Tyre()
{

  delete width;
  width=NULL;
  delete aspect_ratio;
  aspect_ratio=NULL;
  delete diameter;
  diameter=NULL;
}


class Car
{

	int model;
	char* company;
	Tyre * t1;

public:

Car();
Car(int a ,char b[], Tyre c );


void PrintCar();

~Car();


};


Car::Car()
{
model =0;
company=NULL;
t1=NULL;
}
Car::Car(int a ,char b[], Tyre c )
{
    model=a;
	company=new char[strlen(b)+1];
	strcpy(company,b);
	t1=new Tyre(c);

}
void Car::PrintCar()
{
	cout<<"Car's Model:"<<model<<endl;
	cout<<"Car's company:"<<company<<endl;
	cout<<endl<<"Information of Tyre:"<<endl<<endl;
	t1->PrintTyre();
}
Car::~Car()
{

	delete company;
	company=nullptr;
	delete t1;
	t1=nullptr;
}



int main()
{


Tyre tNew(12, 10, 13);
Car cNew(2016,"honda",tNew);
cNew.PrintCar();


return 0;
}

