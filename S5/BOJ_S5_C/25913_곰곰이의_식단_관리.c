#include <stdio.h>

int a, c, i;
char s[100001];
int main() {
	scanf("%d\n%s", &a, s);
	for (i = 0; s[i]; i++)
		if (s[i] != 'C')
			c++;
	printf("%d", a / (c + 1));
	return 0;
}
