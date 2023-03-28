#include<iostream>
#include<fstream>
using namespace std;
int main()
{

    char arr[100];

    ifstream fin;
    fin.open("sami.txt");

      fin.getline(arr,100,'\0');
      cout<<arr;
      return 0;

}
