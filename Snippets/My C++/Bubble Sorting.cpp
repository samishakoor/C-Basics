#include<iostream>
using namespace std;
int main()
{
    const int size=6;
    int arr[size];
    int temp,swap;
    cout<<"Enter Array Elements:"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    for(int i=0 ; i<size-1 ;i++){
    swap=0;
for(int j=0 ; j<(size-i-1) ; j++){
        if(arr[j]<arr[j+1]){
  temp=arr[j];
  arr[j]=arr[j+1];
  arr[j+1]=temp;
  swap=1;
}
}
if(swap==0){
    break;
}
    }

cout<<"Array after Bubble Sorrting :"<<endl;
for(int i=0;i<size;i++)
    cout<<arr[i]<<"  ";
return 0;
}



