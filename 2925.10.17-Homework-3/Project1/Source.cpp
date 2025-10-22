#include <stdio.h>
int main(int args, char** argv)
{
	int n = 0;
	int a = 0;
	int b = 1;
	int s = 0;
	int i = 2;
	scanf_s("%d", &n);
	if (n == 0)
	{
		printf("%d", a);
	}
	else if (n == 1)
	{
		printf("%d", b);
	}
	else

	{
		while (i <= n)
		{
			s = a + b;
			a = b;
			b = s;
			i++;
		}
		printf("%d", b);
	}
	return 0;
}