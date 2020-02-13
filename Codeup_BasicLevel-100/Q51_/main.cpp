#include <iostream>
#include <iomanip>
#pragma warning(disable:4996)

using namespace std;

int main()
{
	// 0 -1
	int a, b;

	cin >> a >> b;

	cout << ((b > a || b == a) ? 1 : 0) << endl;

	return 0;
}