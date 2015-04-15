#include <iostream>
using namespace std;

char* result = nullptr;

bool isLetter(char a)
{
	return !(a == ' ' || a == '.' || a == ',' || a == ';'|| a=='\0');
}


char* reverseWordsOnly(char* str)
{
	result = new char[1000];
	for (int i = 0; i < 1000; i++)
		result[i] = '\0';

	int resultIndex = 0;

	for (int i = 0; i <= strlen(str); i++)
	{
		int index = 0;
		if (!isLetter(str[i]))
		{
			index = i-1;
			for (int j = index; isLetter(str[j]) && j>=0; j--)
			{
				result[resultIndex] = str[j];
				resultIndex++;
			}
			result[resultIndex++] = str[i];
		}
	}
	return result;
}

int main()
{
	char a[1000];
	cin.getline(a, 1000 , '\n');
	
	cout << reverseWordsOnly(a);
	delete[] result;
	return 0;
}

