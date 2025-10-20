# include <stdio.h>
int main()
{
	int num1;
	scanf_s("%d", &num1);
	printf("The next number for the number ");
	printf("%d", num1);
	printf(" is ");
	printf("%d", num1 + 1);
	printf(".\n");
	printf("The previous number for the number ");
	printf("%d", num1);
	printf(" is ");
	printf("%d", num1 - 1);
	printf(".");
	return 0;
}