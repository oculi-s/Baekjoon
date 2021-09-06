#include <stdio.h>
#include <string.h>

int i, n, m, o, c, d;
char s[2501], a[51];

int _c(char *a, char *b) {
	for (int i = 0; i < m; i++)
		if (a[i] != b[i])
			return 0;
	return 1;
}

int main() {
	gets(s), gets(a);
	n = strlen(s), m = strlen(a);
	for (; o <= n - m; o++) {
		c = 0;
		for (i = 0; i <= n - m; i++)
			if (_c(s + o + i, a))
				i += m - 1, c++;
		d = d > c ? d : c;
	}
	printf("%d", d);
	return 0;
}