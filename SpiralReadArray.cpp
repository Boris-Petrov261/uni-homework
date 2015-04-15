#include <iostream>
using namespace std;

int main()
{
	const int MAX = 20;
	int n; cin >> n;
	cin.ignore();
	char A[MAX][MAX][20];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin.getline(A[i][j], 10, '\n');
		}
	}

	int maxWords = n*n;
	int wordsCount = 0;

	for(int s = 0; s < n/2 + n%2; s++)
	{
		for (int i = n - 1 - s; i >= s; i--)
		{
			cout << A[i][n - 1 - s];
			if (wordsCount++ < maxWords-1)
				cout << " ";
		}
		for (int j = n - 2 - s; j >= s; j--)
		{

			cout << A[s][j];
			if (wordsCount++ < maxWords-1)
				cout << " ";
		}
		for (int i = s + 1; i < n - s; i++)
		{
			cout << A[i][s];
			if (wordsCount++ < maxWords-1)
				cout << " ";
		}
		for (int j = s + 1; j < n - 1 - s; j++){
			cout << A[n - 1 - s][j];
			if (wordsCount++ < maxWords-1)
				cout << " ";
		}
	}
	return 0;
}