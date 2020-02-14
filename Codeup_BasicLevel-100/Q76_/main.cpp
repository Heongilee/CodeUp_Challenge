#include <iostream>
#include <iomanip>
#pragma warning(disable:4996)

using namespace std;

int main()
{
	char c, s = 96;

	cin >> c;

	while (c != s) {
		cout << ++s << " ";
	}

	cout << endl;

	return 0;
}