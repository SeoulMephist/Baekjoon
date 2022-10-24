#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N;
	int *num;
	int comp, temp;
	int i = 0;

	scanf ("%d", &N);
	temp = N;
	num = (int *)malloc(sizeof(int)*N);
	if(!num)
		return 0;
	while (N > 0)
	{
		scanf("%d", &num[N - 1]);
		N--;
	}
	scanf ("%d", &comp);
	while (temp > 0)
	{
		if (num[temp - 1] == comp)
			i++;
		temp--;
	}
	printf("%d", i);
}