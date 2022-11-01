#include <stdio.h>

int main()
{
	int A, B, C;
	int result;

	scanf("%d %d %d", &A, &B, &C);
	if (B >= C)
		result = -1;
	else
		result = A / (C - B) + 1;
	printf("%d", result);
}