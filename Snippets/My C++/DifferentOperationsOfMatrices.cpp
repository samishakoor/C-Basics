// adding elements of each row individually AND adding all the elements of 2D Array
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   const int numberofrows=3;
   const int numberofcolumns=3;

   int mymatrix[numberofrows][numberofcolumns];

   for(int i=0 ; i<numberofrows ; i++){
      for(int j=0 ; j<numberofcolumns ; j++){
   cin>>mymatrix[i][j];
      }
   }
int sum=0;
   for(int i=0 ; i<numberofrows ; i++ ){
      for(int j=0 ; j<numberofcolumns ; j++){
   cout<<setw(10)<<mymatrix[i][j];
   sum=sum+mymatrix[i][j];
      }
      cout<<"  Sum of Row/Col # "<<i+1<<" is "<<sum;  // sum of each row
      cout<<endl;
      sum=0;
   }
   //   cout<<"  Sum = "<<sum; // sum of all the elements in a 2D array
   return 0;
}*/

// addition and subtraction of two matrices
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   const int numberofrows=3;
   const int numberofcolumns=3;

   int mymatrix1[numberofrows][numberofcolumns];
   int mymatrix2[numberofrows][numberofcolumns];
   int mymatrix3[numberofrows][numberofcolumns];

   cout<<"Enter Elements of 1st Matrix :"<<endl;
   for(int i=0 ; i<numberofrows ; i++){
      for(int j=0 ; j<numberofcolumns ; j++){
   cin>>mymatrix1[i][j];
      }
   }
   cout<<endl;
   cout<<"Enter the Elements of Second Matrix :"<<endl;
   for(int i=0 ; i<numberofrows ; i++){
      for(int j=0 ; j<numberofcolumns ; j++){
   cin>>mymatrix2[i][j];
      }
   }
   cout<<endl;
   cout<<"The First Matrix is "<<endl;
   for(int i=0 ; i<numberofrows ; i++ ){
      for(int j=0 ; j<numberofcolumns ; j++){
   cout<<setw(10)<<mymatrix1[i][j];
      }
      cout<<endl;
   }
   cout<<endl;
   cout<<"The Second Matrix is "<<endl;
   for(int i=0 ; i<numberofrows ; i++ ){
      for(int j=0 ; j<numberofcolumns ; j++){
   cout<<setw(10)<<mymatrix2[i][j];
      }
      cout<<endl;
   }

   cout<<endl;
   cout<<"The New Matrix After Addition is"<<endl;

   for(int i=0 ; i<numberofrows ; i++ ){
      for(int j=0 ; j<numberofcolumns ; j++){
      mymatrix3[i][j]=mymatrix1[i][j]+mymatrix2[i][j];
      //mymatrix3[i][j]=mymatrix1[i][j]-mymatrix2[i][j];
      }
   }

   for(int i=0 ; i<numberofrows ; i++ ){
      for(int j=0 ; j<numberofcolumns ; j++){

      cout<<setw(5)<<mymatrix3[i][j];
      }
      cout<<endl;
   }
   return 0;
   }*/

 // Product of Two Matrices
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   const int numberofrows1=2, numberofrows2=3;
   const int numberofcolumns1=3,numberofcolumns2=2;

   int mymatrix1[numberofrows1][numberofcolumns1];
   int mymatrix2[numberofrows2][numberofcolumns2];
   int mymatrix3[numberofrows1][numberofcolumns2];

   cout<<"Enter Elements of 1st Matrix :"<<endl;
   for(int i=0 ; i<numberofrows1 ; i++){
      for(int j=0 ; j<numberofcolumns1 ; j++){
   cin>>mymatrix1[i][j];
      }
   }
   cout<<endl;
   cout<<"Enter the Elements of Second Matrix :"<<endl;
   for(int i=0 ; i<numberofrows2 ; i++){
      for(int j=0 ; j<numberofcolumns2 ; j++){
   cin>>mymatrix2[i][j];
      }
   }
   cout<<endl;
   cout<<"The First Matrix is "<<endl;
   for(int i=0 ; i<numberofrows1 ; i++ ){
      for(int j=0 ; j<numberofcolumns1 ; j++){
   cout<<setw(10)<<mymatrix1[i][j];
      }
      cout<<endl;
   }
   cout<<endl;
   cout<<"The Second Matrix is "<<endl;
   for(int i=0 ; i<numberofrows2; i++ ){
      for(int j=0 ; j<numberofcolumns2 ; j++){
   cout<<setw(10)<<mymatrix2[i][j];
      }
      cout<<endl;
   }

   cout<<endl;
   cout<<"The New Matrix After Multiplication is"<<endl;

   for(int i=0 ; i<numberofrows1 ; i++ ){
      for(int j=0 ; j<numberofcolumns2 ; j++){
            int sum=0;
         for(int k=0 ; k<numberofcolumns1 ; k++){
      sum=sum+mymatrix1[i][k]*mymatrix2[k][j];
         }
      mymatrix3[i][j]=sum;
      }
   }

  for(int i=0 ; i<numberofrows1 ; i++ )
    {
      for(int j=0 ; j<numberofcolumns2 ; j++)
      {
        cout<<setw(5)<<mymatrix3[i][j];
      }
      cout<<endl;
   }

   return 0;
   } */

 // Transpose of a Matrix
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   const int numberofrows=2;
   const int numberofcolumns=2;

   int mymatrix[numberofrows][numberofcolumns];

   cout<<"Enter Elements of  Matrix :"<<endl;
   for(int i=0 ; i<numberofrows ; i++){
      for(int j=0 ; j<numberofcolumns ; j++){
   cin>>mymatrix[i][j];
      }
   }
   cout<<endl;

   cout<<"Output of the Matrix is "<<endl;
   for(int i=0 ; i<numberofrows ; i++){
      for(int j=0 ; j<numberofcolumns ; j++){
   cout<<setw(5)<<mymatrix[i][j];
      }
      cout<<endl;
   }
   cout<<endl;

   cout<<"The Transpose Matrix is :"<<endl;
   for(int i=0 ; i<numberofrows ; i++ ){
      for(int j=0 ; j<numberofcolumns ; j++){
        cout<<setw(6)<<mymatrix[j][i];
      }
      cout<<endl;
   }
   return 0;
}*/

// Max and Min Value in a Matrix

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   const int numberofrows=2;
   const int numberofcolumns=3;

   int mymatrix1[numberofrows][numberofcolumns];

   cout<<"Enter Elements of  Matrix :"<<endl;
   for(int i=0 ; i<numberofrows ; i++){
      for(int j=0 ; j<numberofcolumns ; j++){
   cin>>mymatrix1[i][j];
      }
   }
   cout<<endl;

   cout<<"Output of the Matrix is "<<endl;
   for(int i=0 ; i<numberofrows ; i++){
      for(int j=0 ; j<numberofcolumns ; j++){
   cout<<setw(5)<<mymatrix1[i][j];
      }
      cout<<endl;
   }
   cout<<endl;
int max=mymatrix1[0][0];
int min=mymatrix1[0][0];

for(int i=0 ; i<numberofrows ; i++ ){
      for(int j=0 ; j<numberofcolumns ; j++){

       if(max<mymatrix1[i][j])
   max=mymatrix1[i][j];

   if(min>mymatrix1[i][j])
    min=mymatrix1[i][j];

      }
      cout<<endl;
}

  cout<<"The Maximum Number = "<<max<<endl;
  cout<<"The Minimum Number = "<<min<<endl;

  return 0;
}*/

// Even Numbers and ODD Numbers in an Array

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   const int numberofrows=2;
   const int numberofcolumns=3;

   int mymatrix1[numberofrows][numberofcolumns];

   cout<<"Enter Elements of  Matrix :"<<endl;
   for(int i=0 ; i<numberofrows ; i++){
      for(int j=0 ; j<numberofcolumns ; j++){
   cin>>mymatrix1[i][j];
      }
   }
   cout<<endl;

   cout<<"Output of the Matrix is "<<endl;
   for(int i=0 ; i<numberofrows ; i++){
      for(int j=0 ; j<numberofcolumns ; j++){
   cout<<setw(5)<<mymatrix1[i][j];
      }
      cout<<endl;
   }
   cout<<endl;
cout<<"Even numbers in matrix are "<<endl;

 for(int i=0 ; i<numberofrows ; i++){
      for(int j=0 ; j<numberofcolumns ; j++){
            if(mymatrix1[i][j]%2==0){
                // if (mymatrix1!=0){
                    //cout<<mymatrix1[i][j];
                //}
                cout<<mymatrix1[i][j]<<endl;
            }
      }
 }
 return 0;
}*/






