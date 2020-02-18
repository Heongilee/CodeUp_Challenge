#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
	long long int n, p, a, m;

	cin >> n >> p >> a >> m;

	for (int i = 0; i < m - 1; i++) {
		n *= p;
		n += a;
	}

	cout << n << endl;
	return 0;
}