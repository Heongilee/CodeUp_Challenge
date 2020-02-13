#include <iostream>
#include <iomanip>
#pragma warning(disable:4996)

using namespace std;

int main() 
{
	int N, sum = 0;
	for (int i = 0; i < 3; i++) {
		cin >> N;

		sum += N;
	}

	cout << sum << endl;
	
	cout << fixed;
	cout << setprecision(1);
	cout << double(sum) / 3 << endl;

	return 0;
}