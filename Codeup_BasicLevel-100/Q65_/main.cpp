#include <iostream>
#include <iomanip>
#include <vector>
#pragma warning(disable:4996)

using namespace std;

int main()
{
	int N;
	std::vector<int> v;

	for (int i = 0; i < 3; i++) {
		cin >> N;
		v.push_back(N);
	}

	for (auto &e : v) {
		if (e % 2 == 0) {
			cout << e << endl;
		}
		else {

		}
	}

	return 0;
}