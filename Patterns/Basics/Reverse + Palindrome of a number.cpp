#include<iostream>
using namespace std;

int main()
{
int input,temp;
cout << "Enter number: ";
cin >> input;
temp=input;
int reverse = 0;
while (input != 0) {
reverse = reverse * 10 + input % 10;
input = input / 10;
}
cout << reverse << endl;

if(temp==reverse){
    cout<<"Palindrome";

}
else{
    cout<<"Not Palindrome";
}

return 0;

}
