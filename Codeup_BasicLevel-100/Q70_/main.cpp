#include <iostream>
#include <iomanip>
#pragma warning(disable:4996)

using namespace std;

int main()
{
	int N;
	cin >> N;

	switch (N / 3 % 4) {
		case 0:
			cout << "winter" << endl;
			break;
		case 1:
			cout << "spring" << endl;
			break;
		case 2:
			cout << "summer" << endl;
			break;
		case 3:
			cout << "fall" << endl;
			break;
		default:
			break;
	}

	return 0;
}