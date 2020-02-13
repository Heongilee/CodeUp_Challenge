#include <iostream>
#include <vector>
#include <string>
#pragma warning(disable:4996)

using namespace std;

class Date {
private:
	vector<string> v;
public:
	Date() {
		string s;

		getline(cin, s);

		for (int i = 0; i < s.length();) {
			if (i == 0) {
				v.push_back(s.substr(i, 4));
				i += 5;
			}
			else if (i == 5) {
				v.push_back(s.substr(i, 2));
;				i += 3;
			}
			else if (i == 8) {
				v.push_back(s.substr(i, 2));
				break;
			}
			else {}
		}
	}

	void print() {
		cout << this->v.at(2) << "-" << this->v.at(1) << "-" << this->v.at(0) << endl;
	}
};

int main() {

	Date d1;

	d1.print();
	
	return 0;
}