#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

void FileInput(int M[][3],int &r,int &c);
void matrixDisplay(int M[][3]);


void FileInput(int M[][3],int &r, int &c)
{
	ifstream fin;
	fin.open("Matrix.txt");
	fin>>r;
	fin>>c;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			fin>>M[i][j];
        }
	}
}

void matrixDisplay(int M[][3]){

for(int i=0 ; i<3 ; i++ ){
      for(int j=0 ; j<3 ; j++){
   cout<<setw(10)<<M[i][j];
      }
      cout<<endl;
   }
}

int main()
{
    int M[3][3];
    int r=0 ,c=0 ;
FileInput(M,r,c);
cout<<endl;
matrixDisplay(M);
}



