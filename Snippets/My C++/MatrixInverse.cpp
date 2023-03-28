#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   const int numberofrows=3;
   const int numberofcolumns=3;

   float M[3][3],A[3][3],C[3][3],I[3][3];
   float det=0;
   int a,b,c;
   for(int i=0 ; i<3 ; i++){
      for(int j=0 ; j<3 ; j++){
   cin>>M[i][j];
      }
   }
 for(int i=0 ; i<3 ; i++ ){
      for(int j=0 ; j<3 ; j++){
   cout<<setw(10)<<M[i][j];
      }
      cout<<endl;
   }

	a = M[0][0] * (((M[1][1] * M[2][2]) - (M[1][2] * M[2][1])));
	b = M[0][1] * (((M[1][0] * M[2][2]) - (M[1][2] * M[2][0])));
	c = M[0][2] * (((M[1][0] * M[2][1]) - (M[1][1] * M[2][0])));

	det = a - b + c;



    C[0][0]=M[1][1]*M[2][2]-M[1][2]*M[2][1];
	C[0][1]=-1*(M[1][0]*M[2][2]-M[1][2]*M[2][0]);
	C[0][2]=M[1][0]*M[2][1]-M[1][1]*M[2][0];
	C[1][0]=-1*(M[0][1]*M[2][2]-M[2][1]*M[0][2]);
	C[1][1]=M[0][0]*M[2][2]-M[0][2]*M[2][0];
	C[1][2]=-1*(M[0][0]*M[2][1]-M[0][1]*M[2][0]);
	C[2][0]=M[0][1]*M[1][2]-M[0][2]*M[1][1];
	C[2][1]=-1*(M[0][0]*M[1][2]-M[0][2]*M[1][0]);
	C[2][2]=M[0][0]*M[1][1]-M[0][1]*M[1][0];


 for(int i=0 ; i<3 ; i++ ){

      for(int j=0 ; j<3 ; j++){
            A[i][j]=C[j][i];
      }
  cout<<endl;
 }

   for(int i=0;i<3;i++)
    {
		for(int j=0;j<3;j++)
      {
		A[i][j]=A[i][j]/det;
      }
    }
   if(det!=0)
   {
    cout<<"Inverse of Matrix is  " <<endl;
    for(int i=0;i<3;i++)
    {
		cout<<endl<<endl<<endl;
		for(int j=0;j<3;j++)
			cout<<setw(10)<<A[i][j];

	}
  }
  else
  cout<<"\nINVERSE NOT POSSIBLE AS DETERMINANT( |A| ) IS EQUAL TO ZERO";

return 0;
}

