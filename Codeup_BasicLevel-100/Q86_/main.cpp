#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	int w, h, b;

	cin >> w >> h >> b;

	cout << fixed;
	cout << std::setprecision(2);

	//Overflow ������ prod������ ���߿� �� �ش�.
	cout << double(w) / (pow(2, 20)) / 8 * h * b << " MB" << endl;

	return 0;
}