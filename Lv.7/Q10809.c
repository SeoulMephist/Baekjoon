#include <stdio.h>

int main()
{
	int i = 'a';
	int j;
	int flag;
	char str[100];

	scanf("%s", str);

	while (i <= 'z')
	{
		flag = 0;
		j = 0;
		while (str[j])
		{
			if (str[j] == i)
			{
				printf("%d ", j);
				flag = 1;
				break;
			}
			j++;
		}
		if (flag == 0)
			printf("-1 ");
		i++;
	}
}