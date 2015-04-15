#include <iostream>
using namespace std;


char* encode(char* str, char* alpha)
{
	
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = alpha[(int)(str[i] - 'a')];
		}
	}

	return str;
}

int main()
{
	char input[1000];
	char alpha[1000];

	cin.getline(input, 1000, '\n');
	cin.clear();
	cin.getline(alpha, 1000,'\n');

	cout << encode(input, alpha);

	return 0;
}