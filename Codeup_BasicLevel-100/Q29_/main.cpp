#include <iostream>
#include <iomanip>
#pragma warning(disable:4996)

using namespace std;

int main() {
	double N;

	cin >> N;

	cout<<fixed;	//���� �Ҽ������� ��ȯ
	cout.precision(11);	//�Ҽ��� �Ʒ� 11�ڸ����� ���
	cout << setiosflags(ios::showpoint)/*�Ҽ��� �� �ڸ��� 0 ä���ֱ�*/ << N << endl;

	return 0;
}