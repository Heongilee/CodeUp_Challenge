#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
	int a, b;

	cin >> a >> b;

	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	cout << a / b << endl;
	cout << a % b << endl;

	cout << fixed;
	cout << setprecision(2);
	cout << (double) a / b << endl;

	return 0;
}