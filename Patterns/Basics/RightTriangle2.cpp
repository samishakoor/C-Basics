#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter Height of Triangle: ";
cin>>n;

int i,j ;
   for(i=1 ; i<=n;i++)
   {
     for(int k=1 ; k<=n-i ;k++) // if you wanna reverse that triangle then dont do anything with that second for loop
      {
        cout<<" ";
      }
      for( j=1 ; j<=i; j++)
        {
               cout<<"*";
        }
      cout<<endl;
   }

return 0;
}

