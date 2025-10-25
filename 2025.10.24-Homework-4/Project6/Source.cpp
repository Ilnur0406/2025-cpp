#include <stdio.h>
int main(int argc, char** argv)
{
	int n = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	scanf_s("%d %d %d %d %d", &n, &a, &b, &c, &d);
	int arr[1000];
	for (int i = 0; i <n; i++)
	{
		arr[i] = i + 1;
	}
	int s = a - 1;
	int e = b - 1;
	while (s < e)
	{
		int t = arr[s];
		arr[s] = arr[e];
		arr[e] = t;
		s++;
		e--;
	}
	s = c - 1;
	e = d - 1;
	while (s < e)
	{
		int t = arr[s];
		arr[s] = arr[e];
		arr[e] = t;
		s++;
		e--;
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}