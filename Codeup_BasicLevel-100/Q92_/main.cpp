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
		//검사
		for (auto &e : v) {
			if (n % e != 0) {	//하나라도 배수의 조건에 맞지 않으면 escape한다.
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