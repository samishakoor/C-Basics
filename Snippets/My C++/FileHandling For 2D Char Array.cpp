#include<iostream>
#include<fstream>
using namespace std ;
void matrixdisplay1(char arr[][100]);
void matrixdisplay2(char arr[][100]);

void matrixdisplay1(char arr[][100])
{
ifstream fin;
fin.open("sample.txt");

for(int i=0 ; i<100 ; i++ ){

    fin.getline(arr[i],100,'\0');

}

}


void matrixdisplay2(char arr[][100]){


for(int i=0 ; i<100 ;i++){



    cout<<arr[i];

}



}








int main (){
  //const int size=5;
  //const int length=20;
  char arr[100][100];



 matrixdisplay1(arr);
 matrixdisplay2(arr);




return 0;
}
