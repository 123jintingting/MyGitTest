#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int *arr, int len)
{
	int count = 0;
	for (int i = 0; i < len - 1; i++)
	{
		int flag = 1;

		for (int j = 0; j < len - 1 - i; j++)
		{
			count++;
			if (arr[j] > arr[j + 1])
			{
				flag = 0;
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;

			}

		}
		if (flag)
		{
			printf("次数:%d\n", count);
			count;
		}

	}
	printf("次数:%d\n", count);

}
void PrintArr(int *arr, int n)
{
	for (int i = 0; i < n; i++)
		printf("%d\n", arr[i]);

}
int main01()
{
	int arr[] = { 2, 7, 6, 3, 9, 1, 4, 5, 8, 0 };

	BubbleSort(arr, 10);

	PrintArr(arr,10);




	return 0;
}