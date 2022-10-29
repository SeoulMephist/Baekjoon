#include <stdio.h>

int main()
{
	int i = 0;
	int cnt = 0;
	char str[1000001];

	scanf("%[^\n]", str);
	if (str[i] == ' ')
		i++;
	if (!str[i])
	{
		printf("0");
		return 0;
	}
	while (str[i])
	{
		if (str[i] == ' ' || str[i + 1] == 0)
			cnt++;
		i++;
	}
	printf("%d", cnt);
}