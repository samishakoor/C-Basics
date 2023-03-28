#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter Height of Triangle: ";
cin>>n;
    for(int i=1 ; i<=n;i++)
   {
      for(int j=1 ; j<=n; j++)
        {
            if(i==j || i+j==n+1 || i==1 ||i==n )
               cout<<"*";
               else
                cout<<" ";
        }
    cout<<endl;
   }
return 0;
}

