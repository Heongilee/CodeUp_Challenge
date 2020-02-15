#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() 
{
	int a, b, r;
	cin >> a >> b >> r;

	cout << setprecision(20) << (long long int)a * pow(b, r - 1) << endl;

	return 0;
}