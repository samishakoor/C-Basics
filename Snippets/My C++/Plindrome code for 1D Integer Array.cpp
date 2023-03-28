#include<iostream>
#include<cstring>
using namespace std;
int main()
{
int p ;
const int size=5;
char arr1[size];
char arr2[size];
//int i;
for (int i=0 ; i <= size-1 ; i++)
    {
        cin>>arr1[i];
    }
for (int i=0 ; i <= size-1 ; i++)
    {
        arr2[i]=arr1[size-i-1];
    }

for (int i=0 ; i <= size-1 ; i++){
    if(arr1[i]!=arr2[i])
    {
        p=0;
        break;
    }
    else
    {
        continue;
    }
}
if(p==0)
    cout<<"Not p";
else
    cout<<"Yes p";

 return 0;
}
