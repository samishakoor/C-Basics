
#include<iostream>
using namespace std;

class time
{
private:
	int hours;
	int min;
	int sec;
public:
	time();
	time(int h ,int m, int s);
	//setters
	time sethours(int a);
	time setmin(int b);
	time setsec(int c);
    //getters
    int gethours();
	int getmin();
	int getsec();

	time getCurrentTime();
    void displayTime();

    ~time();

};

time::time()
{
	this->hours = 0;
	this->min = 0;
	this->sec = 0;
cout<<"Default Constructor called !"<<endl;
}

time::time(int h , int m,int s)
{

    this->hours=(h>=0 && h<=24)?h:24;
    this->min=(m>=0 && m<=59)?m:59;
    this->sec=(s>=0 && s<=59)?s:59;

cout<<"Parameterized Constructor called !"<<endl;
}

time time::sethours(int a)
{
	this->hours=(a>=0 && a<=24)?a:24;
	return *this;
}

time time::setmin(int b)
{
	this->min=(b>=0 && b<=59)?b:59;
	return *this;
}

time time::setsec(int c)
{
	this->sec=(c>=0 && c<=59)?c:59;
	return *this;
}


    int time::gethours()
    {
      return this->hours;
    }
	int time::getmin()
	{
	  return this->min;
	}
	int time::getsec()
	{
	  return this->sec;
	}


time::~time()
{

}






time time::getCurrentTime()
{

time obj;

obj.hours=this->hours;
obj.min=this->min;
obj.sec=this->sec;

return obj;
}

void time::displayTime()
{

cout<<endl<<this->hours<<":"<<this->min<<":"<<this->sec<<endl<<endl;

}



int main()
{
    time t1;
	time t2(12, 30, 15);
    t2.displayTime();

    time t3,t4;
    //cascaded calling of setters
    t4=t3.sethours(5).setmin(30).setsec(45);
    t4.displayTime();
    //dynamic object implementation
    time *tptr=&t2;
    tptr->displayTime();

    time *aptr=new  time (t4);
    aptr->displayTime();

    time *bptr=new time [2];

    bptr[1]=t2;
    bptr[2]=t4;


    for(int i=1; i<=2 ;i++)
        {
          bptr[i].displayTime();
          cout<<endl;
        }




    time t5;
    cout<<"Current Time"<<endl;
    t5=t4.getCurrentTime();
    t5.displayTime();

    cout<<endl;
    int x,y,z;
    x=t2.gethours();
    y=t2.getmin();
    z=t2.getsec();

cout<<"Hours  Min  Sec "<<endl;
cout<<x<<"  : "<<y<<"  :  "<<z<<endl;

	return 0;

}
