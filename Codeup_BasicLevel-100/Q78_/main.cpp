#include <iostream>
#include <iomanip>
#pragma warning(disable:4996)

using namespace std;

int main()
{
	int N, sum = 0;

	cin >> N;

	for (int i = 1; i <= N; i++) {
		if (i % 2 == 0) {
			sum += i;
		}
		else {

		}
	}

	cout << sum << endl;

	return 0;
}