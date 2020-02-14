#include <iostream>
#include <iomanip>
#pragma warning(disable:4996)

using namespace std;

int main()
{
	int a, b, c;

	cin >> a >> b >> c;

	cout << ((((a < b) ? a : b) < c) ? ((a < b) ? a : b) : c )<< endl;

	return 0;
}