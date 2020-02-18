#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	// �� �� !!  2���� ���� ���� �� �ʱ�ȭ �ϴ� ���.
	// 19X19 2���� ���͸� ����� ��� ���� 0���� �ʱ�ȭ �Ѵ�.
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