#include <iostream>
#include <string>
#pragma warning(disable:4996)

using namespace std;

int main()
{
	char s[2001];

	cin.getline(s, 2000, '\n');

	cout << s << endl;
	return 0;
}