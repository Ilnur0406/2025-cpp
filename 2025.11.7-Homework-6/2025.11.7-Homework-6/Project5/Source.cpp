#include<stdio.h>
#include<stdlib.h>

int main (int argc, char** argv)
{
	int a = 0;
	scanf_s("%d", &a);
	if ((a < 1) || (a > 1000))
	{
		return 1;
	}
	int* arr = (int*)malloc(a * sizeof(int));
	if (arr == NULL)
	{
		return 1;
	}
	for (int i = 0; i < a; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	int c = 0;
	for (int i = 1; i < a; i++)
	{
		if (((arr[i] > 0) && (arr[i - 1] > 0) && (arr[i + 1] > 0)) || ((arr[i] < 0) && (arr[i - 1] < 0) && (arr[i + 1] < 0)))
		{
			c++;
		}
	}
	if (c > 0)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	free(arr);
	return 0;
