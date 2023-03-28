#include<iostream>
using namespace std;

bool isPrime(int N);

bool isPrime(int N)
{

for(int i=2 ;i<N ; i++){
    if(N%i==0)
        return false;
}
 return true;

}

int main()
{
     int N,b;
     cout<<"Enter a Number :";
     cin>>N;

     b=isPrime(N);

     if(b)
        cout<<N<<" is a Prime Number!";
     else
        cout<<N<<" is not a Prime Number!";
     return 0;

}
