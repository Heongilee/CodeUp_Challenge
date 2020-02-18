#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	// 꿀 팁 !!  2차원 벡터 선언 및 초기화 하는 방법.
	// 19X19 2차원 벡터를 만들고 모든 값을 0으로 초기화 한다.
	std::vector<std::vector<int>> v(19, vector<int>(19, 0));
	
	int N;
	cin >> N;
	
	int x, y;
	for (int i = 0; i < N; i++) {
		cin >> x >> y;

		v[x - 1][y - 1] = 1;
	}

	for (auto &i : v) {
		for (auto &j : i) {
			cout << j << " ";
		}
		cout << endl;
	}

	return 0;
}