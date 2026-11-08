#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int isPrime(int num)
{
	if (num <= 1)
		return 0;
	for (int i = 2;i * i <= num;i++)
	{
		if (num % i == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int x;
	printf("输入整数:");
	scanf("%d", &x);
	if (isPrime(x))
		printf("%d是素数\n", x);
	else
		printf("%d不是素数\n", x);
	return 0;
}