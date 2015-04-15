//Take 3 arrays, sort them and merge them into a fourth one

#include <iostream>
using namespace std;

int main()
{
	const int MAX = 5000;
	int a[MAX], b[MAX], c[MAX], d[3*MAX];
	int n; cin>>n;
	for(int i =0; i<n; i++){
		cin >> a[i];
		d[i] = a[i];
	}
	for(int i =0; i<n; i++){
		cin >> b[i];
		d[i+n] = b[i];
	}
	for(int i =0; i<n; i++){
		cin >> c[i];
		d[i+2*n] = c[i];
	}

	for(int i =0; i < 3*n; i++)
	{
		for(int j =0; j < 3*n; j++)
		{
			if(d[i] < d[j])
			{
				int temp = d[i];
				d[i] = d[j];
				d[j] = temp;
			}
		}
	}

	for (int i = 0; i < 3 * n; i++)
	{
		cout << d[i];
		if (i < 3 * n - 1)
			cout << " ";
	}
	return 0;
}