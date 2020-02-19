#include <iostream>
#include <iomanip>
#include <array>

using namespace std;

class Map {
private:
	int** matrix;
	int size_x;
	int size_y;

public:
	Map(int x, int y) :size_x(x), size_y(y){
		matrix = new int*[size_y];
		for (int i = 0; i < size_y; i++) {
			matrix[i] = new int[size_x];

			for (int j = 0; j < size_x; j++) {
				cin >> matrix[i][j];
			}
		}
	}
	~Map() {
		for (int i = 0; i < size_y; i++) {
			delete[] matrix[i];
		}
		delete[] matrix;
	}
	int** &get_Matrix() {
		return this->matrix;
	}

	void print() {
		for (int i = 0; i < size_y; i++) {
			for (int j = 0; j < size_x; j++) {
				cout << matrix[i][j] << " ";
			}
			cout << endl;
		}

		return;
	}

};

class Ant {
private:
	int x;
	int y;
	bool status;	//먹이를 먹거나, 길이 막히면 false가 됨.


public:
	Ant() :x(1), y(1), status(true){
	}

	void set_x(const int& x) {
		this->x = x;
	}
	void set_y(const int& y) {
		this->y = y;
	}
	int& get_x() {
		return this->x;
	}
	int& get_y() {
		return this->y;
	}
	void set_status() {
		this->status = (this->status) ? false : true;
	}
	bool& get_status() {
		return this->status;
	}
};
int main()
{
	Map m(10, 10);
	Ant a;

	while (a.get_status()) {
		//먹이 체크
		if (m.get_Matrix()[a.get_x()][a.get_y()] == 2) {
			m.get_Matrix()[a.get_x()][a.get_y()] = 9;
			
			a.set_status();
			break;
		}
		
		//발자국 찍기
		m.get_Matrix()[a.get_x()][a.get_y()] = 9;

		
		if(m.get_Matrix()[a.get_x()][a.get_y() + 1] == 1)
		{	//오른쪽 전진 시 장애물
			if (m.get_Matrix()[a.get_x() + 1][a.get_y()] == 1)
			{	//하향 이동 시 장애물
				a.set_status();
			}
			else
			{	//하향 이동 가능
				a.set_x(a.get_x() + 1);
			}
		}
		else 
		{	//오른쪽 이동 가능
			a.set_y(a.get_y() + 1);
		}
	}

	m.print();

	return 0;
}