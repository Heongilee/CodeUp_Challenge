#include <iostream>
#include <string>
#pragma warning(disable:4996)

using namespace std;

int main()
{
	string s;

	cin >> s;

	for (auto &e : s) {
		cout << "\'" << e << "\'" << endl;
	}

	return 0;
}