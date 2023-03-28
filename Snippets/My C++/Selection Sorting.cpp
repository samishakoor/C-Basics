
#include<iostream>
using namespace std;
void fillmatrix(int arr[],int n);
void display(const int arr[],int n);
void sorting(int arr[],int n);
void printmatrix(const int arr[] , int n);

void swap (int&x , int&y);

void swap (int&x , int&y){
int temp=x;
x=y;
y=temp;
}


void fillmatrix(int arr[],int n){
cout<<"Enter Array Elements :"<<endl;
for(int i=0;i<n;i++)
    cin>>arr[i];
}

void display(const int arr[],int n){
    cout<<" Original Array is:"<<endl;
    for(int i=0 ; i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void sorting(int arr[],int n){

for(int i=0 ; i<n-1 ;i++){
    int mI=i;
for(int j=i+1 ; j<n ; j++){
        if(arr[j]<arr[mI])
        mI=j;
swap (arr[i],arr[mI]);
//int temp=arr[i];
  //arr[i]=arr[mI];
  //arr[mI]=temp;
}
}
}

void printmatrix(const int arr[] , int n){
        cout<<endl;
        cout<<"Sorted Array is :"<<endl;
for(int i=0 ; i<n;i++){

        cout<<arr[i]<<" ";
    }
}

int main()
{
    const int size=10;

    int arr[size];

    fillmatrix(arr,size);
    display(arr,size);
    sorting(arr,size);
    printmatrix(arr,size);

    return 0;
}
