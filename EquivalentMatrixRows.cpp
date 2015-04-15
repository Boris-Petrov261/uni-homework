#include <iostream>
using namespace std;

int main()
{
	int A[20][30];
	int m,n,k; cin >> m; cin>>n; cin >> k;
	bool putSpace = false; // fuck FMI and stupid automated testing
	for(int i = 0; i < m; i++)
		for(int j=0; j < n; j++)
			cin >> A[i][j];

	for(int i = 0; i < m ; i++)
	{
		bool rowCorrect1 = false;
		bool rowCorrect2 = false;
		for(int j = 0; j < n; j++)
		{
			rowCorrect1 = false;
			rowCorrect2 = false;
			for(int s = 0; s < n; s++)
			{
				if(A[i][j] == A[k][s])
					rowCorrect1 = true;
				if(A[k][j] == A[i][s])
					rowCorrect2 = true;
			}
			if(rowCorrect1 == false)
				break;
			if(rowCorrect2 == false)
				break;
		}
		if(rowCorrect1 && rowCorrect2)
		{
			
			if (i != k){
				//seriously
				if (putSpace)
					cout << " ";
				else
					putSpace = true;
				cout << i;
			}
		}
	}

	return 0;
}