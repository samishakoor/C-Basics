#include<iostream>
using namespace std;
void power(int n ,int m);


void power(int n ,int m){
int mul=1;
for(int i=0 ; i<m  ; i++)
    {
       mul*=n;                  // mul = mul * n

    }
cout<<n<<" raise to power "<<m<<" is "<<mul<<endl;

}



int main()
{
    int n , m ;
    cout<<"Enter a positive power which you want to raise power : ";
    cin>>n;

    cout<<"Enter power: ";
    cin>>m;

    power(n,m);




    return 0;
}


