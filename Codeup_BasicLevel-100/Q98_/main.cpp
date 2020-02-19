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
	//세로, 가로
	int h, w;
	cin >> h >> w;
	arr = new int*[h];
	for (int i = 0; i < h; i++) {
		arr[i] = new int[w] {0};
	}

	//막대 개수
	int n;
	cin >> n;

	//막대 길이, 방향(가로= 0, 세로 = 1), 좌표(x, y)
	int l, d, x, y;
	for (int i = 0; i < n; i++) {
		cin >> l >> d >> x >> y;

		//인덱스 값과 맞추기 위함.
		x--; 
		y--;

		//막대 길이 만큼
		for (int j = 0; j < l; j++) {
			switch (d) {
			case 0:		// 가로
				arr[x][y++] = 1;
				break;
			case 1:		// 세로
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