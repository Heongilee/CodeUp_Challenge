#include <iostream>
#include <iomanip>
#pragma warning(disable:4996)

using namespace std;

int main() {
	int N;

	cin >> N;
	
	cout << setbase(16) << setiosflags(ios::uppercase) << N << endl;
	return 0;
}