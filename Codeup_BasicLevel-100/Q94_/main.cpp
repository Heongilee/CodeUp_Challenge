#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int N, M;

	cin >> N;

	std::vector<int> v;


	for (int i = 0; i < N; i++) {
		cin >> M;

		v.push_back(M);
	}

	for (int i = 0; i < N; i++) {
		cout << v.back() << " ";

		v.pop_back();
	}
	cout << endl;

	return 0;
}