#include<stdio.h>

int fun(int x)
{
	int a = 0;
	for (int i = 1; i <= x; i++) {
		int b = i;
		do {
			if (b % 10 == 1) { a++;}
		} while (b /= 10);
	}
	return a;
}

int main()
{
	printf("%d", fun(13));

	return 0;
}