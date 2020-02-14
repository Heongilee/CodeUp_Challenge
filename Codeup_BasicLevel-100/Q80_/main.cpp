#include <iostream>
#include <iomanip>
#pragma warning(disable:4996)

using namespace std;

int main()
{
	int N, s = 1, sum = 0;

	cin >> N;

	while (true) {
		sum += s;

		if (sum >= N) {
			cout << s << endl;
			break;
		}
		s++;
	}

	return 0;
}