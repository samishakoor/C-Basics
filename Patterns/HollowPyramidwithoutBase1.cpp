#include<iostream>
using namespace std;
int main()
{
    int n,i,j ;
    cout<<"Enter Height Of Pyramid :";
    cin>>n;
    cout<<endl;

    for( i=1 ; i<=n  ; i++ ){
        for( j=i ; j<=n   ; ++j)
        {
           cout<<" ";
        }
        for( j=1 ; j<=(2*i-1) ; j++)
        {


            if( i==0 || j==1|| j==(2*i-1))
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

