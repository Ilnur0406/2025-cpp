# include <stdio.h>
int main()
{
	long long A;
	long long B;
	scanf_s("%lld", &A);
	B = ((A + 1) / 2) * ((A + 1) / 2);
	printf("%lld", B);
	return 0;
}