#include <iostream>
#pragma warning(disable:4996)

using namespace std;

int main()
{
	int f, r;

	scanf("%d-%d", &f, &r);

	printf("%06d%07d", f, r);
	return 0;
}