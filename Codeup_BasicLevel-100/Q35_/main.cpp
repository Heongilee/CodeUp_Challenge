#include <iostream>
#include <iomanip>
#pragma warning(disable:4996)

using namespace std;

int main() {
	int N;

	cin >> setbase(16) >> N;

	cout << setbase(8) << N << endl;
	return 0;
}
