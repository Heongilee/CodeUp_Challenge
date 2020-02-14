#include <iostream>
#include <iomanip>
#pragma warning(disable:4996)

using namespace std;

int main()
{
	int N;

	cin >> N;

	if (N >= 90 && N <= 100) {
		cout << "A" << endl;
	}
	else if (N >= 70 && N <= 89) {
		cout << "B" << endl;

	}
	else if (N >= 40 && N <= 69) {
		cout << "C" << endl;

	}
	else if (N >= 0 && N <= 39) {
		cout << "D" << endl;

	}
	else{}
	return 0;
}