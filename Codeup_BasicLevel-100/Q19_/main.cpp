#include <iostream>
#pragma warning(disable:4996)
using namespace std;

int main()
{
	int y, m, d;
	scanf("%d.%d.%d", &y, &m, &d);


	printf("%04d.%02d.%02d", y, m, d);
	return 0;
}