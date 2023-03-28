#include<iostream>
using namespace std;
int main()
{
    int n,i,j ;
    cout<<"Enter Height Of Pyramid :";
    cin>>n;
    cout<<endl;

    for( i=1 ; i<=n  ; i++ )
    {
        for( j=1 ; j<=i  ; ++j)
        {
            if( i==j || j==1 || i==n )
           {
              cout<<"*";

           }
            else
                cout<<" ";
        }
       cout<<endl;
    }





    return 0;
}
