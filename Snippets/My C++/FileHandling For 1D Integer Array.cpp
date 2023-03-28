#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int arr[5];
    ifstream fin;
    fin.open("sami.txt");

for (int i=0 ;i<5; i++){
      fin>>arr[i];
}


for (int i=0 ;i<5; i++){
      cout<<arr[i]<<" ";
}
      return 0;
}
