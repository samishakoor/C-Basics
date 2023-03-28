#include<iostream>
using namespace std;
void fillmatrix(int arr[],int n);
void display(const int arr[],int n);
void sorting(int arr[],int n);
void printmatrix(const int arr[] , int n);
int binarysearch(int key , int arr[] , int n);
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
int loc,min;
for(int i=0 ; i<n-1 ;i++){
    min=arr[i];
    loc=i;
for(int j=i+1 ; j<n ; j++){
        if(arr[j]<min){
                min=arr[j];
        loc=j;
        }
 //int temp=arr[i];
  //arr[i]=arr[mI];
 // arr[mI]=temp;
}
//swap (arr[i],arr[loc]);
 int temp=arr[i];
  arr[i]=arr[loc];
  arr[loc]=temp;
}
}


void printmatrix(const int arr[] , int n){
        cout<<endl;
        cout<<"Sorted Array is :"<<endl;
for(int i=0 ; i<n;i++){

        cout<<arr[i]<<" ";
    }
}

int binarysearch(int key , int arr[] , int n){

int left=0 , right =n-1;

while(left<=right){
   int mid=(left+right)/2;

    if(key == arr[mid])
        return mid;
    if(key<arr[mid])
        right=mid-1;
    if(key>arr[mid])
        left=mid+1;
}
 return -1;
}


int main()
{
    const int size=10;

    int arr[size];

    fillmatrix(arr,size);
    display(arr,size);
    sorting(arr,size);
    printmatrix(arr,size);

int key ;

cout<<"Enter Key To Search:";
cin>>key;

int result=binarysearch( key ,  arr, size);

if(result == -1)
cout<<endl<<key<< " not found "<<endl;
else
cout<<endl<<key<<" found at index "<<result<<endl;
    return 0;
}
