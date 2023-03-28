#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;


const int ROWS=3;
const int COLS=3;

void FILE_INPUT (float Matrix[][3])
{
    ifstream fin;
    fin.open("Matrix.txt");
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            fin >> Matrix[i][j];
        }
    }
}
int DETERMINANT(float Matrix[][3])
{
    int DET, a, b, c, d, e, f, g, h, i;
    a=Matrix[0][0];
    b=Matrix[0][1];
    c=Matrix[0][2];
    d=Matrix[1][0];
    e=Matrix[1][1];
    f=Matrix[1][2];
    g=Matrix[2][0];
    h=Matrix[2][1];
    i=Matrix[2][2];

    DET=(((e*i)-(f*h))*a)-(((d*i)-(f*g))*b)+(((d*h)-(e*g))*c);

    return DET;
}

int COFACTOR(float Matrix[][3], int i, int j)
{
    int coFACT;
    coFACT = Matrix[(i +1) % 3][(j + 1) % 3]* Matrix[(i + 2) % 3][(j + 2) % 3]- Matrix[(i + 1) % 3][(j + 2) % 3]*Matrix[(i + 2) % 3][(j + 1) % 3];

        return coFACT;
}
int TRANSPOSE(float MATRIX[][3])
{

   int arr2[ROWS][COLS];

   for(int i=0;i<ROWS;i++ )
       {
        for(int j=0; j<COLS;j++)
           {
             arr2[i][j]=MATRIX[j][i];
           }
}
   for(int i=0;i<ROWS;i++ )
       {
        for(int j=0; j<COLS;j++)
           {
            cout<<setw(2)<<arr2[i][j]<<" ";
           }
          cout<<endl;
}

}


 int main()
 {
     int i;
     int j;
     float Matrix[3][3],adj[3][3],arrCofactor[ROWS][COLS];
     float inverse[3][3];
     int DET;
     FILE_INPUT(Matrix);
     cout <<"\t ***MATRIX CALCULATOR*** \t"<<endl<<endl<<endl;
     cout << "DETERMINANT OF THE MATRIX: " << DETERMINANT(Matrix) << endl <<endl;
     DET=DETERMINANT(Matrix);
     cout << "TRANSPOSE OF THE MATRIX: "<<endl<<endl;
     TRANSPOSE(Matrix);
     cout <<endl<<endl;
     cout << "CO-FACTOR OF THE MATRIX" <<endl<< endl;
       for(int i=0;i<ROWS;i++)
   {
       for(int j=0;j<COLS;j++)
       {
           arrCofactor[i][j]=COFACTOR(Matrix, i, j);
       }
   }
       for(int i=0;i<ROWS;i++)
   {
       for(int j=0;j<COLS;j++)
       {
          cout<<setw(2)<<arrCofactor[i][j]<<"  ";
       }
    cout<<endl;
   }
   cout <<endl<<endl;
   cout << "ADJOINT OF THE MATRIX: "<<endl<<endl;

      for(int i=0;i<ROWS;i++)
   {
       for(int j=0;j<COLS;j++)
       {
           adj[j][i]=COFACTOR(Matrix, i, j);
       }
   }
       for(int j=0;j<ROWS;j++)
   {
       for(int i=0;i<COLS;i++)
       {
          cout<<setw(2)<<adj[j][i]<<"  ";
       }
    cout<<endl;
   }
     cout << endl<<endl;
     cout << "INVERSE OF MATRIX: "<<endl;
         for(int i=0;i<ROWS;i++)
   {
       for(int j=0;j<COLS;j++)
       {
           inverse[i][j]=adj[j][i]/DET;
       }
   }
        for(int j=0;j<ROWS;j++)
   {
       for(int i=0;i<COLS;i++)
       {
          cout<<setw(10)<<inverse[i][j]<<" ";
       }
       cout <<endl;
   }
cout <<endl<<endl;


ofstream fout;
fout.open("Matrix.txt");
fout << "\t ***MATRIX CALCULATOR*** \t"<<endl<<endl<<endl;
fout << "DETERMINANT OF THE MARIX: "<<DET<<endl;
fout <<endl<<endl;

fout << "CO-FACTOR OF THE MATRIX: "<<endl<<endl;
for (int i=0;i<ROWS;i++)
{
    for (int j=0;j<COLS;j++)
    {
        fout<<setw(2)<< arrCofactor[i][j]<<" ";
    }
    fout <<endl;
}
fout <<endl<<endl;

fout << "ADJOINT OF THE MATRIX: "<<endl<<endl;
for (int j=0;j<ROWS;j++)
{
    for (int i=0;i<COLS;i++)
    {
        fout<<setw(2)<< adj[i][j]<<" ";
    }
    fout <<endl;
}
fout <<endl<<endl;

fout <<"INVERSE OF THE MATRIX: "<<endl<<endl;
for (int j=0;j<ROWS;j++)
{
    for (int i=0;i<COLS;i++)
    {
        fout<<setw(10)<< inverse[i][j]<<" ";
    }
    fout <<endl;
}
fout <<endl<<endl;


     return 0;
   }



