#include <iostream>
#include <iomanip>
#pragma warning(disable:4996)

using namespace std;

int main()
{
	char c;

	cin >> c;

	switch (c) {
	case 'A':
		cout << "best!!!" << endl;
		break;
	case 'B':
		cout << "good!!" << endl;
		break;
	case 'C':
		cout << "run!" << endl;
		break;
	case 'D':
		cout << "slowly~" << endl;
		break;
	default:
		cout << "what?" << endl;
		break;
	}

	return 0;
}