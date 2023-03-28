#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   const int numberofrows=3;
   const int numberofcolumns=3;

   int M[numberofrows][numberofcolumns];
   float det=0;
   int a,b,c;

   for(int i=0 ; i<numberofrows ; i++){
      for(int j=0 ; j<numberofcolumns ; j++){
   cin>>M[i][j];
      }
   }
 for(int i=0 ; i<numberofrows ; i++ ){
      for(int j=0 ; j<numberofcolumns ; j++){
   cout<<setw(10)<<M[i][j];
      }
      cout<<endl;
   }

    a = M[0][0] * (((M[1][1] * M[2][2]) - (M[1][2] * M[2][1])));
	b = M[0][1] * (((M[1][0] * M[2][2]) - (M[1][2] * M[2][0])));
	c = M[0][2] * (((M[1][0] * M[2][1]) - (M[1][1] * M[2][0])));

	det = a - b + c;

cout<<endl;
cout<<"Determinant is "<<det;

   return 0;
}
