#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char x;
	printf("請輸入一個英文字母: \n");
	scanf_s("%c", &x);

	if (64 < x < 91)
	{
		 x = x + 32;
		printf("%c\n", x);
	}
	else if (96 < x < 123)
	{
		 x = x - 32;
		printf("%c\n", x);
	}
	system("pause");
	return 0;
}