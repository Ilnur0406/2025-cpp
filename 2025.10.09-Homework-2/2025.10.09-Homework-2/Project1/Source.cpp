#include <cstdio>
int main(int agrc, char** argv)
{
	char x1 = 0;
	char y1 = 0;
	char x2 = 0;
	char y2 = 0;
	scanf_s("%c %c %c %c", &x1, &y1, &x2, &y2);
	if ((y1 == 2) && (x2 = x1) && (y2 = y1 + 2))
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}