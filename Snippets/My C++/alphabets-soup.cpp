#include<iostream>
#include<string>
using namespace std;


string alphabetSoup(string str) 
{
	char temp;
	temp= 'a';
	int temp_start_ascii = (int)temp;
	temp = 'z';
	int temp_end_ascii = (int)temp;

	char* sorted_soup = new char[str.length() - 1];
	int index = 0;


	for (int i=temp_start_ascii;i<=temp_end_ascii;i++) 
	{
		for (int j=0;j<str.length();j++) 
		{
			char string_char = str[j];
			int string_ascii = (int)string_char;

			if (i == string_ascii) 
			{
				sorted_soup[index] = string_char;
				index++;
			}
		}
	}  
	for (int i = 0; i < str.length(); i++)
	{
		char c = sorted_soup[i];
		str[i] = c;
	}
	return str;
}


int main() 
{
	cout << alphabetSoup("samishakoor");
	return 0;
}