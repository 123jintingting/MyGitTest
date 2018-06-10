#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void InsertSortStr(char *p[], int n)
{
	for (int i = 1; i < n; i++)
	{

		int pos=i;
		char *tmp = p[i];
		for (int j = i - 1; j >= 0; j--)
		{
			if (strcmp(tmp, p[j]) < 0)
			{
				pos = j;
				p[j + 1] = p[j];
			}
			else
				break;

		}
		p[pos] = tmp;
	}

}

void PrintStr(char *p[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%s\n", p[i]);

}
int main()
{
	char *str[] = { "bbb", "ccc", "aaa", "ppp", "hhh", "eee" };

	InsertSortStr(str, sizeof(str) / sizeof(char*));

	PrintStr(str, sizeof(str) / sizeof(char*));



	return 0;
}