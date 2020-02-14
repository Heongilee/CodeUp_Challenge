#include <iostream>
#include <iomanip>
#pragma warning(disable:4996)

using namespace std;

int main()
{
	int cnt, N;

	cin >> cnt;

LOOP:
	cin >> N;

	cout << N << endl;

	if (--cnt != 0) goto LOOP;

	return 0;
}