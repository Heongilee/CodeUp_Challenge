#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int N, M;
	std::vector<int> v;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> M;

		v.push_back(M);
	}

	std::sort(v.begin(), v.end(), less<int>());

	cout << v.at(0) << endl;

	return 0;
}