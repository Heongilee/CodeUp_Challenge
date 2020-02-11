#include <iostream>
#include <stdlib.h>
#include <string>
#pragma warning(disable:4996)

using namespace std;

int main()
{
	int a;
	int size = 10000;

	cin >> a;

	string s{to_string(a)};

	for (auto &e : s) {
		cout << "[" << (e - 48) * size << "]" << endl;
		size /= 10;
	}

	return 0;
}