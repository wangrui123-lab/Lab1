#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	float C, F;
	printf("输入摄氏温度：");
	scanf("%f", &C);
	F = 9.0 / 5 * C + 32;
	printf("华氏温度=%.2f\n", F);
	return 0;
}