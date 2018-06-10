#include <stdio.h>

void ReChange(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void SelectSort(int *arr, int n)
{
	for (int i = 0; i < n-1; i++)
	{
		int min = i;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[min] > arr[j])
			{
				min = j;
			}

		}
		if (min != i)
			ReChange(arr + i, arr + min);

	}


}

void PrintSort(int*arr, int n)
{
	for (int i = 0; i < n; i++)
		printf("%d\n", arr[i]);

}
int main02()
{
	int arr[] = { 0, 8, 3, 7, 4, 2, 1, 5, 9, 6 };
	SelectSort(arr, 10);

	PrintSort(arr, 10);

	return 0;
}