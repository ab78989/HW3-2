#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int i, j,a;
	printf("�п�J��ƭȡA�e�̬����ơA��̬�����: \n");
	scanf_s("%d %d", &i, &j);
	if (j < 1)
	{
		return 0;
	}	
	printf("�ƭȬ�:%d\n", answer(i,j));
	system("pause");
	return 0;
}

int answer(int i, int j)
{
	int a;
	a = pow(i, j);
	return a;
}