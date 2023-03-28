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
        for( j=1 ; j<=n   ; ++j)
        {
            if( i==n || i+j==n+1    || j==n  )
           {
                cout<<"*";
           }
            else{


                cout<<" ";
            }
        }

        cout<<endl;
    }

    return 0;
}

