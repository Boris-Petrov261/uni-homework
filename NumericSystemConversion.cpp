#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int main()
{
	const int MAX = 100;
	int k, p; 
	char xK[MAX];
	cin >> k >> p >> xK;
	int decNum = 0;
	char result[MAX];

	//Convert from k to decimal
	for (int i = strlen(xK)-1, power =0; i >= 0; i--, power++)
	{
		int baseNum = 0;
		if (xK[i] >= '0' && xK[i] <= '9')
			baseNum = xK[i] - '0';
		switch (xK[i])
		{
		case 'A':
			baseNum = 10;
			break;
		case 'B':
			baseNum = 11;
			break;
		case 'C':
			baseNum = 12;
			break;
		case 'D':
			baseNum = 13;
			break;
		case 'E':
			baseNum = 14;
			break;
		case 'F':
			baseNum = 15;
			break;
		}
		decNum += baseNum * pow(k, power);
	}

	//Convert to p
	int n = decNum;
	int counter = 0;
	for (int i = 0; n != 0; i++)
	{
		int temp = n % p;
		if (temp >= 0 && temp <= 9)
			result[i] = char(temp+'0');
		switch (temp)
		{
		case 10:
			result[i] = 'A';
			break;
		case 11:
			result[i] = 'B';
			break;
		case 12:
			result[i] = 'C';
			break;
		case 13:
			result[i] = 'D';
			break;
		case 14:
			result[i] = 'E';
			break;
		case 15:
			result[i] = 'F';
			break;
		}
		counter++;
		n /= p;
	}
	
	for (int j = counter-1; j >=0 ; j--)
		cout << result[j];

	return 0;
}