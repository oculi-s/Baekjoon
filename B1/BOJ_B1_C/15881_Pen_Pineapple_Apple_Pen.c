#include <stdio.h>
#include <string.h>

int _c(char* a) {
	if (a[0] == 'p')
		if (a[1] == 'P')
			if (a[2] == 'A')
				if (a[3] == 'p')
					return 1;
	return 0;
}

int n, c, o, i;
char s[1000001];
int main() {
	scanf("%d\n%s", &n, s);
	c = 0;
	for (i = 0; i <= n; i++)
		if (_c(s + i))
			i += 3, c++;
	printf("%d", c);
	return 0;
}