#include <stdio.h>
#include <string.h>

char s[1000001], a[400000];
int i, e, n;
int main() {
	gets(s + 2);
	s[0] = '0', s[1] = '0';
	n = strlen(s);
	for (; i < n; i++)
		s[i] -= '0';
	for (i = n; i >= 3; i -= 3)
		a[e] = s[i - 1] + s[i - 2] * 2 + s[i - 3] * 4, e++;
	while (e--)
		printf("%d", a[e]);
	return 0;
}