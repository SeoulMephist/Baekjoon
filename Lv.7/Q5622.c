#include <stdio.h>

int main()
{
	int i = 0;
	int result = 0;
	char str[16];

	scanf("%s", str);
	while (str[i])
	{
		if (str[i] - 'A' < 18)
			str[i] = (str[i] - 'A') / 3 + 3;
		if (str[i] - 'A' == 18)
			str[i] = 8;		
		if (str[i] - 'A' > 18 && str[i] - 'A' < 25)
			str[i] = (str[i] - 'A' - 1) / 3 + 3;
		if (str[i] - 'A' >= 25)
			str[i] = 10;
		result += str[i];
		i++;
	}
	printf("%d", result);
}