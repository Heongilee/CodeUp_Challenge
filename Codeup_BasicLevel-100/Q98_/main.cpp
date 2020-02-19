#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

void print(int** arr, const int& height, const int& width) {
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	return;
}
int main()
{
	int** arr;
	//����, ����
	int h, w;
	cin >> h >> w;
	arr = new int*[h];
	for (int i = 0; i < h; i++) {
		arr[i] = new int[w] {0};
	}

	//���� ����
	int n;
	cin >> n;

	//���� ����, ����(����= 0, ���� = 1), ��ǥ(x, y)
	int l, d, x, y;
	for (int i = 0; i < n; i++) {
		cin >> l >> d >> x >> y;

		//�ε��� ���� ���߱� ����.
		x--; 
		y--;

		//���� ���� ��ŭ
		for (int j = 0; j < l; j++) {
			switch (d) {
			case 0:		// ����
				arr[x][y++] = 1;
				break;
			case 1:		// ����
				arr[x++][y] = 1;
				break;
			default:	//??
				break;
			}
		}
	}

	print(arr, h, w);

	//dealloc
	for (int i = 0; i < h; i++) {
		delete[] arr[i];
	}
	delete[] arr;

	return 0;
}