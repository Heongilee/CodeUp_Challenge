#include <iostream>
#include <iomanip>
#pragma warning(disable:4996)

using namespace std;

int main()
{
	int N;

	while (true) {
		cin >> N;

		if (N == 0) {
			goto ESCAPE;
		}

		cout << N << endl;
 	}
ESCAPE:

	return 0;
}