#include <iostream>
#include <string>
#pragma warning(disable:4996)

using namespace std;

int main()
{
	string s;

	getline(cin, s, '\n');

	for (auto & e : s) {
		if (e == '.') {
			cout << endl;
		}
		else {
			cout << e;
		}
	}

	return 0;
}