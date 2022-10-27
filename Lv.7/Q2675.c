#include <stdio.h>

int main()
{
	int T;
	int i = 0, j, l, R;
	char S[21];
	
	scanf("%d", &T);
	while (i < T)
	{
		j = 0;
		scanf("%d %s", &R, S);
		while (S[j])
		{
			l = 0;
			while (l < R)
			{
				printf("%c", S[j]);
				l++;
			}
			j++;
		}
		printf("\n");
		i++;
	}
}