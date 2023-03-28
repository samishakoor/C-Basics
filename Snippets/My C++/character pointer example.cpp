#include<iostream>
using namespace std;


int getlength(char *str)
{

int len=0;

for (int i=0 ; str[i]!='\0';i++)
    {

    len++;

    }
    return len;
}


void copystring (char *str)
{
int length=getlength(str);


char *p=new char[length];

for(int i=0 ;i<length ; i++)
    {
    p[i]=str[i];

    }
    p[length+1]='\0';
for(int i=0 ;i<length ; i++)
    {
    cout<<p[i];

    }
}


int main()
{
char *ptr="sami123";

copystring(ptr);


    return 0;

}
