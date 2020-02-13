#include <iostream>
#include <iomanip>
#pragma warning(disable:4996)

using namespace std;

int main() {
	double N;

	cin >> N;

	cout<<fixed;	//고정 소수점으로 변환
	cout.precision(11);	//소수점 아래 11자리까지 출력
	cout << setiosflags(ios::showpoint)/*소수점 빈 자리에 0 채워넣기*/ << N << endl;

	return 0;
}