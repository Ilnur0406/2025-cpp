#include <stdio.h>
int main()
{
	int M;
	int N;
	scanf_s("%d %d", &M, &N);
	int a = (N - 1) / M + 1;
	int b = (N - 1) % M + 1;
	printf("%d %d", a, b);
	return 0;
}