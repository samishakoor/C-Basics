#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter Height of Triangle: ";
cin>>n;

int i,j ;


   for(i=n ; i>=1;i--)
   {
     for(int k=n-i ; k>=0 ;k--)
      {
        cout<<"  ";
      }
      for( j=i ; j>=1; j--)
        {
               cout<<"*";
        }
      cout<<endl;
   }



   for(i=2 ; i<=n;i++)
   {
     for(int k=n-i ; k>=0 ;k--)
      {
        cout<<"  ";
      }
      for( j=1 ; j<=i; j++)
        {
               cout<<"*";
        }
      cout<<endl;
   }

return 0;
}
