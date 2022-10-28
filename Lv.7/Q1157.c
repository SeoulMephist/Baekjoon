#include <stdio.h>

int main()
{
	char str[1000001];
	char result = 0;
	int alpha[26] = {0,};
	int i = 0;
	int max = 0;
	int flag = 0;
	
	scanf("%s", str);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		alpha[str[i] - 'A']++;
		i++;
	}
	i = 0;
	while (i < 26)
	{
		if (alpha[i] > max)
		{
			max = alpha[i];
			result = 'A' + i;
		}
		i++;
	}
	i = 0;
	while (i < 26)
	{
		if (max == alpha[i])
			flag++;
		i++;
	}
	if (flag == 1)
		printf("%c", result);
	else
		printf("?");
}