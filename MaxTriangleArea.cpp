#include <iostream>
#include <cmath>
using namespace std;

double calculateArea(double a, double b, double c)
{
	double p = (a+b+c)/2;
	return sqrt(p*(p-a)*(p-b)*(p-c));
}

int main()
{
	const int MAX = 20;
	int n; cin >> n;
	double a[MAX], b[MAX], c[MAX];
	double maxArea = 0;
	int index =0;
	for(int i =0; i < n ; i++)
	{
		cin>> a[i]; cin>> b[i]; cin>>c[i];
		if(calculateArea(a[i], b[i],c[i]) > maxArea)
		{
			maxArea= calculateArea(a[i], b[i],c[i]);
			index = i;
		}
	}

	cout << index;
	return 0;
}