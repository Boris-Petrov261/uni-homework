#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	string what;
	getline(cin, str);
	cin.clear();
	getline(cin, what);

	if (str.rfind(what) != string::npos){
		int index = str.rfind(what);

		for (int i = 0; i < str.length(); i++)
		{
			if (i < index || i >= index + what.length())
				cout << str[i];
		}
	}
else
	cout << str;
	return 0;
}