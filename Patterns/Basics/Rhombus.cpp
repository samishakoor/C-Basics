#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter Height of Rhombus: ";
cin>>n;
cout<<endl;

 for(int i=1 ; i<=n;i++)
   {
       for(int j=1 ; j<=i   ;j++)
      {
         cout<<" ";
      }
      for(int j=1 ; j<=n; j++)
        {
           cout<<"*";
        }
      cout<<endl;
   }
return 0;
}

