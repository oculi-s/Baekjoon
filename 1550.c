#include <stdio.h>

int main()
{
	char a[60];
	char *s = "0123456789ABCDEF";
	scanf("%s", a);
	int v = 0, i = 0, j = 0;
	while (a[i])
	{
		for (j = 0; j < 16; j++)
			if (a[i] == s[j])
				break;
		v += j, v *= 16, i++;
	}
	printf("%d", v / 16);
	return 0;
}