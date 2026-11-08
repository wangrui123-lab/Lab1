#include<stdio.h>
void bubbleSort(int arr[], int n)
{
	int i, j, temp;
	for (i = 0;i < n;i++)
	{
		for (j = 0;j < n - 1 - i;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
void printArr(int arr[], int n)
{
	for (int i = 0;i < n;i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
}
int main()
{
	int a1[] = { 6,2,8,3,1 };
	int len1 = sizeof(a1) / sizeof(a1[0]);
	printf("第一组原数组:");
	printArr(a1, len1);
	bubbleSort(a1, len1);
	printf("排序后:");
	printArr(a1, len1);
	int a2[] = { 9,0,8,3,1 };
	int len2 = sizeof(a2) / sizeof(a2[0]);
	printf("第二组原数组:");
	printArr(a2, len2);
	bubbleSort(a2, len2);
	printf("排序后:");
	printArr(a2, len2);
	return 0;
}