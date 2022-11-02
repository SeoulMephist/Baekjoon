#include <stdio.h>

int main()
{
	int N;
	int i = 0;
	int n = 0;

	scanf("%d", &N);
	while (3 * n * n - 3 * n + 1 < N)
	{
		n++;
	}
	if (N == 1)
		n = 1;
	printf("%d", n);
}