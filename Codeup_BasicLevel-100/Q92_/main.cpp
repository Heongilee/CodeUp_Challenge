#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() 
{
	std::vector<int> v;
	int N;

	for (int i = 0; i < 3; i++) {
		cin >> N;

		v.push_back(N);
	}
	
	int n = 1;
	bool f = true;
	while (true) {
		//�˻�
		for (auto &e : v) {
			if (n % e != 0) {	//�ϳ��� ����� ���ǿ� ���� ������ escape�Ѵ�.
				f = false;
				break;
			}
		}

		if (f == true) break;
		else { 
			n++; 
			f = true;
		}
	}

	cout << n << endl;
	return 0;
}