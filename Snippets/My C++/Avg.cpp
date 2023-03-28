#include<iostream>
using namespace std;

int main()
{

     int sum=0 ;
     int x;
     int i=0;
     cin>>x;
     while(x>0){
                  sum = sum +x;
                 i+=1;
            cin>>x;

      }

      cout<<"Avg = "<<sum/i;
     return 0;
}
