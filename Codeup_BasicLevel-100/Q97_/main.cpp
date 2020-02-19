#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

void print(int** arr) {
	for (int i = 0; i < 19; i++) {
		for (int j = 0; j < 19; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	return;
}
int main() 
{	
	int** arr;

	arr = new int*[19];
	for (int i = 0; i < 19; i++)	arr[i] = new int[19]{ 0 };

	// Matrix �Է�
	for (int i = 0; i < 19; i++) {
		for (int j = 0; j < 19; j++) {
			cin >> arr[i][j];
		}
	}

	// N �Է�
	int N;
	cin >> N;

	// x, y�� N�� �Է�
	int x, y;
	for (int i = 0; i < N; i++) {
		cin >> x >> y;

		for (int i = 0; i < 19; i++) {
			arr[x - 1][i] = (arr[x - 1][i] == 1) ? 0 : 1;
			arr[i][y - 1] = (arr[i][y - 1] == 1) ? 0 : 1;
		}
	}

	print(arr);

	// Dealloc
	for (int i = 0; i < 19; i++)	delete[] arr[i];
	delete[] arr;

	return 0;
}