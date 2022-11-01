#include <stdio.h>
#include <stdlib.h>

int word_checker(char *str)
{
	int i = 0;
	int j;

	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
			{
				if (j - i > 1 && str[j] != str[j - 1])
					return 0;
			}
			j++;
		}
		i++;
	}
	return 1;
}

int main()
{
	int N;
	int i = 0;
	int result = 0;
	char **str;

	scanf("%d", &N);
	str = (char**)malloc(sizeof(char*) * (N + 1));
	str[N] = 0;
	while (i < N)
	{
		str[i] = (char*)malloc(sizeof(char) * (101));
		scanf("%s", str[i]);
		i++;
	}
	i = 0;
	while (str[i])
	{
		result += word_checker(str[i]);
		i++;
	}
	printf("%d", result);
}