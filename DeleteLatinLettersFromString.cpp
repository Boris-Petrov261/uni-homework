#include <iostream>
#include <cstring>
using namespace std;

char* letters(char* str)
{
	char* newString= new char[1000];
	for (int i = 0; i < 1000; i++)
		newString[i] = '\0';
	int index =0;
	for(int i =0; i < strlen(str); i++)
	{
		if((str[i] >= 'A' && str[i] <= 'Z')||(str[i] >= 'a' && str[i] <= 'z'))
		{
			newString[index] = str[i];
			index++;
		}
	}

	return newString;
}

int main()
{
	char str[1000];
	cin.getline(str, 1000, '\n');
	cout << letters(str);

	return 0;
}