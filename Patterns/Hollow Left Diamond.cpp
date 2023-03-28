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
            if( i==j || j==1 )
           {
              cout<<"*";

           }
            else
                cout<<" ";
        }
       cout<<endl;
    }




    for( i=n-1 ; i>=1  ; i-- )
    {
        for( j=i ; j>=1  ; --j)
        {
            if( i==j || j==1 )
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
