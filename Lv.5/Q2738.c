#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N, M;
	int i = 0, j = 0;
	int **mat1, **mat2;

	scanf("%d %d", &N, &M);
	mat1 = (int **)malloc(sizeof(int*) * N);
	while (i < N)
	{
		mat1[i] = (int *)malloc(sizeof(int) * M);
		i++;
	}
	mat2 = (int **)malloc(sizeof(int*) * N);
	while (j < N)
	{
		mat2[j] = (int *)malloc(sizeof(int) * M);
		j++;
	}
	if (!mat1 || !mat2)
		return 0;
	i = 0, j = 0;
	while (i < N)
	{
		j = 0;
		while (j < M)
		{
			scanf("%d", &mat1[i][j]);
			j++;
		}
		i++;
	}
	i = 0, j = 0;
	while (i < N)
	{
		j = 0;
		while (j < M)
		{
			scanf("%d", &mat2[i][j]);
			j++;
		}
		i++;
	}
	i = 0, j = 0;
	while (i < N)
	{
		j = 0;
		while (j < M)
		{
			printf("%d ", mat1[i][j] + mat2[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}