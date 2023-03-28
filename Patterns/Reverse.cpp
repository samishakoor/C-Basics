#include<iostream>
using namespace std;
int main()
{
char arr1[100];
char arr2[100];
cout<<"Enter any String :";
cin.getline(arr1,100);
int len=0;
int i;
for(i=0 ; arr1[i]!='\0'   ; i++)
    len++;

for(i=0 ;  i<len  ;i++)
        arr2[i]=arr1[len-i-1];
arr2[i]='\0';


cout<<arr2;


return 0;
}
