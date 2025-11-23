#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
unsigned char ToUpper(unsigned char C)
{
	if (C >= 'a' && C <= 'z')
	{
		return C - ('a' - 'A');
	}
	else if (C >= 'A' && C <= 'Z')
	{
		return C + ('a' - 'A');
	}
	return C;
}

int main(int argc, char** argv)
{
	unsigned char C;
	scanf("%C", &C);
	printf("%c\n", ToUpper(C));
	return 0;
}