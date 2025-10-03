#include <stdio.h>
int main()
{
	long long M;
	long long N;
	scanf_s("%lld %lld", &M, &N);
	long long a;
	a = ((M - 1) * (N - 1) + 1);
	printf("%lld", a);
	return 0;
}
