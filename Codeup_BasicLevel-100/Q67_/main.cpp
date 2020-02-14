#include <iostream>
#include <iomanip>
#include <vector>
#pragma warning(disable:4996)

using namespace std;

int main()
{
	int e;

	cin >> e;

	if (e > 0) {	//Plus
		cout << "plus" << endl;
		if (e % 2 == 0) {
			cout << "even" << endl;
		}
		else {
			cout << "odd" << endl;
		}
	}
	else {			//Minus
		cout << "minus" << endl;
		if (e % 2 == 0) {
			cout << "even" << endl;
		}
		else {
			cout << "odd" << endl;
		}
	}

	return 0;
}