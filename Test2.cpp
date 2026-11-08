#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n;
	double sum = 0;
	int a = 2, b = 1, temp;
	for (n = 1;n <= 10;n++)
	{
		sum += (double)a / b;
		temp = a;
		a = a + b;
		b = temp;
	}
	printf("前几项和=%.4f\n", sum);
	return 0;
}