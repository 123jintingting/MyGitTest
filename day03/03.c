#include <stdio.h>

void InsertSort(int *arr, int n)
{
	int pos;
	int tmp;
	for (int i = 1; i < n; i++)
	{
		tmp = arr[i];
		pos = i;
		for (int j = i - 1; j >= 0; j--)
		{
			if (tmp < arr[j])
			{
				pos = j;
				arr[j + 1] = arr[j];
			}
			else
				break;

		}
		arr[pos] = tmp;
	}


}

void InsertPrint(int *arr, int n)
{
	for (int i = 0; i < n; i++)
		printf("%d\n", arr[i]);
}

int main03()
{

	int arr[] = { 0, 9, 2, 7, 4, 5, 8, 1, 3 ,6};
	InsertSort(arr, 10);
	InsertPrint(arr, 10);

	return 0;
}