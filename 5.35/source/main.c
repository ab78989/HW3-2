#include <stdio.h>
#include <stdlib.h>

int fib(int n);
int main(void)
{
	int  j;
	printf("請輸入一數字 將產生?項的費氏數列\n");
	scanf_s("%d", &j);
	printf("\n");
	printf("0\n1\n");
	for (int i = 2; i < j; i++)
	{
		printf("%d\n", fib(i));
	}
	system("pause");
	return 0;
}
int fib(int n)
{
	int result = 0, temp1=0, temp2=1;
	for (int i = 0; i < n-1; i++)
	{
		result = temp1 + temp2;
		temp1 = temp2;
		temp2 = result;
	}
	return result;
}

