#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	int h, b, c, s;

	cin >> h >> b >> c >> s;

	cout << fixed;
	cout << std::setprecision(1);

	//Overflow 때문에 prod연산을 나중에 해 준다.
	cout << double(h) / (pow(2, 20)) / 8 * b * c * s << " MB" << endl;

	return 0;
}