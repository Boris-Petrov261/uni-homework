#include <iostream>
using namespace std;

int main()
{
	const int MAX = 20;
	int n; cin >>n;
	int A[MAX][MAX];

	for(int i = 0; i < n; i++)
		for(int j =0; j < n; j++)
			cin >> A[i][j];

	bool triangleMat = true;

	for(int i = 0 ; i < n && triangleMat ; i++)
	{
		for(int j = 0; j < n && triangleMat; j++)
		{
			if(i > j && A[i][j] !=0)
				triangleMat = false;
			if(i <= j && A[i][j] == 0)
				triangleMat = false;
		}
	}

	if(triangleMat == false)
	{
		triangleMat = true;
		for(int i = 0 ; i < n && triangleMat ; i++)
		{
			for(int j = 0; j < n && triangleMat; j++)
			{
				if(i < j && A[i][j] !=0)
					triangleMat = false;
				if(i >= j && A[i][j] == 0)
					triangleMat = false;
			}
		}
	}
	cout << triangleMat;

	return 0;
}