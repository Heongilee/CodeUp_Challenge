#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int N, sum =0, s = 1;

	cin >> N;

	while (true) {
		if (sum >= N) {
			cout << sum << endl;
			break;
		}

		sum += s++;

	}
	return 0;
}