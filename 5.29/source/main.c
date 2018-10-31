#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b;
	printf("輸入兩整數: \n");
	scanf_s("%d %d", &a, &b);
	printf("LCM is %d\n", lcm(a,b));
	system("pause");
	return 0;
}

int lcm(int x, int y)
{
	int  i, gcd, s;
	for ( i = 1; i <= x; i++)
	{
		if (x % i == 0)
		{
			if (y % i == 0)
			{
				gcd = i;
			}
		}
	}
	s = x * y/gcd;
	return s;
}