#include <iostream>
#include <iomanip>
#pragma warning(disable:4996)

using namespace std;

int main() {
	int N;
	cin >> setbase(8) >> N;

	cout << setbase(10) << N << endl;
	return 0;
}