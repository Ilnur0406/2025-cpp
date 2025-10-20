# include <stdio.h>
int main()
{
	int a;
	int b;
	scanf_s("%d %d", &a, &b);
	int m;
	int n;
	int h;
	int s;
	n = a * b;
	m = n % 109;
	h = 109 + m;
	s = h % 109;
	printf("%d", s + 1);
	return 0;
}