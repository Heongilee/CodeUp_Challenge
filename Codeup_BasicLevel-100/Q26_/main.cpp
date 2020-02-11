#include <iostream>
#include <string>
#pragma warning(disable:4996)

using namespace std;

int main()
{
	string s1;
	int result;
	bool f = false;

	getline(cin, s1, '\n');

	for (int i = 0; i < s1.length(); i++) {
		if (s1.at(i) == ':') {
			f = true;
			continue;
		}
		if (f) {
			//한 자리
			if (s1.substr(i, 3).at(1) == ':')
				result = stoi(s1.substr(i, 1), nullptr, 10);
			//두 자리
			else
				result = stoi(s1.substr(i, 2), nullptr, 10);

			break;
		}
	}

	cout << result << endl;

	return 0;
}