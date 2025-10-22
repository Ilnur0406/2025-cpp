#include <stdio.h>

int main(int argc, char** argv)
{
	int a = 0;
	int b = -1;
	int c = 1;
	int d = 1;
	do
	{
		scanf_s("%d", &a);
		if (a == b)
		{
			c++;
		}
		else
		{
			if (c > d)
			{
				d = c;
			}
			c = 1;
		}
		b = a;
	} 
	while (a != 0);
	printf("%d", d);
	return 0;
}