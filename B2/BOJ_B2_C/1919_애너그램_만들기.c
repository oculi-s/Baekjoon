#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char a[1001], b[1001];
int c[26], d[26], n, m, i, s;
int main() {
	scanf("%s\n%s", a, b);
	n = strlen(a), m = strlen(b);
	for (i = 0; i < n; i++)
		c[a[i] - 'a']++;
	for (i = 0; i < m; i++)
		d[b[i] - 'a']++;
	for (i = 0; i < 26; i++)
		s += abs(c[i] - d[i]);
	printf("%d", s);
	return 0;
}