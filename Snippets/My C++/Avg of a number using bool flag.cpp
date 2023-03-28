#include<iostream>
using namespace std;

int main()
{
bool flag=false;
     int sum=0 ;
     int x,i=0;
     while(!flag){
            cin>>x;
            if(x==-1){
             break;
            }
            sum = sum +x;
            i=i+1;
      }
      cout<<"Avg = "<<sum/i;
     return 0;
}
