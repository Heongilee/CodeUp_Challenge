#include <iostream>
#include <iomanip>
#pragma warning(disable:4996)

using namespace std;

int main()
{
	int a, b;

	cin >> a >> b;

	cout << ((a > b) ? a : b) << endl;
	return 0;
}