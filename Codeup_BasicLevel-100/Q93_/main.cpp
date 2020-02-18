#include <iostream>
#include <iomanip>
#include <algorithm>
#include <array>

using namespace std;

int main() 
{
	std::array<int, 23> s = {0};
	
	int N, M;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> M;

		s.at(M - 1)++;
	}

	for (auto &e : s) {
		cout << e << " ";
	}

	cout << endl;
	return 0;
}