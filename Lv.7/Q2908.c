#include <stdio.h>
#include <stdlib.h>

void change_fl(char *str)
{
	int temp;
	temp = str[0];
	str[0] = str[2];
	str[2] = temp;
}

int main()
{
	char A[4], B[4];
	int Ai, Bi;

	scanf("%s %s", A, B);
	change_fl(A);
	change_fl(B);
	Ai = atoi(A);
	Bi = atoi(B);
	if (Ai > Bi)
		printf("%d", Ai);
	else
		printf("%d", Bi);
}