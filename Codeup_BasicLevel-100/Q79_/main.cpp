#include <iostream>
#include <iomanip>
#pragma warning(disable:4996)

using namespace std;

int main()
{
	char c;

	while (true) {
		cin >> c;

		cout << c << endl;

		if (c == 'q') break;
	}

	return 0;
}