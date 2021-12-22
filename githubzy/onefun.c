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
	for(int i=1;i<100;i++)
    {
        if(i == fun(i)) printf("%d ",i);
    }

	return 0;
}