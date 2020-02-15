#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int N;

	cin >> N;

	for (int i = 1; i <= N; i++) {
		if (i % 3 == 0) {
			continue;
		}
		else {
			cout << i << " ";
		}
	}
	cout << endl;
	return 0;
}