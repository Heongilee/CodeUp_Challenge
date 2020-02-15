#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int N;

	cin >> N;

	for (int i = 1; i <= N; i++) {
		//일의 자리 판단
		if ((((i % 10) % 3 == 0) && (i % 10 != 0)) || (((i / 10) % 3 == 0)) && (i >= 10)) {
			if (((i % 10) % 3 == 0) && (i % 10 != 0)) {
				cout << "X";
			}
			if (((i / 10) % 3 == 0) && (i >= 10)) {
				cout << "X";
			}
		}
		else {
			cout << i;
		}
		cout << " ";
	}
	return 0;
}