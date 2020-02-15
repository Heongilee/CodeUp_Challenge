#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int N;

	//16Áø¼ö istream
	cin >> setbase(16) >> N;

	//iteration 
	for (int i = 1; i <= 15; i++) {
		cout << setbase(16) << setiosflags(ios::uppercase) << N << "*" << i << "="<< N * i << endl;
	}

	return 0;
}