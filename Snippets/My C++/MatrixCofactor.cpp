
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   //const int numberofrows=3;
 //  const int numberofcolumns=3;

   int M[3][3];
   int C[3][3];


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


    C[0][0]=M[1][1]*M[2][2]-M[1][2]*M[2][1];
	C[0][1]=-1*(M[1][0]*M[2][2]-M[1][2]*M[2][0]);
	C[0][2]=M[1][0]*M[2][1]-M[1][1]*M[2][0];
	C[1][0]=-1*(M[0][1]*M[2][2]-M[2][1]*M[0][2]);
	C[1][1]=M[0][0]*M[2][2]-M[0][2]*M[2][0];
	C[1][2]=-1*(M[0][0]*M[2][1]-M[0][1]*M[2][0]);
	C[2][0]=M[0][1]*M[1][2]-M[0][2]*M[1][1];
	C[2][1]=-1*(M[0][0]*M[1][2]-M[0][2]*M[1][0]);
	C[2][2]=M[0][0]*M[1][1]-M[0][1]*M[1][0];


 cout<<"Matrix Cofactor is "<<endl;
 for(int i=0 ; i<3 ; i++ ){

      for(int j=0 ; j<3 ; j++){
            cout<<setw(10)<<C[i][j];
      }
  cout<<endl;
 }
return 0;
}
