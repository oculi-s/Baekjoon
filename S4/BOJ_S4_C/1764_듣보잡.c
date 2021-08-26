#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char a[500000][21], b[500000][21], s[500000][21];

int _c(char a[21], char b[21]) {
	return strcmp(a, b);
}

int _bisect(char t[21], int r) {
	int l = 0, m;
	while (l < r) {
		m = (l + r) / 2;
		if (strcmp(a[m], t) >= 0)
			r = m;
		else
			l = m + 1;
	}
	return !strcmp(a[r], t);
}

int n, m, i, j, e;
int main() {
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++)
		scanf("%s", a[i]);
	qsort(a, n, sizeof(char) * 21, _c);
	for (i = 0; i < m; i++) {
		scanf("%s", b[i]);
		if (_bisect(b[i], n))
			strcpy(s[e], b[i]), e++;
	}
	printf("%d\n", e);
	qsort(s, e, sizeof(char) * 21, _c);
	for (i = 0; i < e; i++)
		printf("%s\n", s[i]);
	return 0;
}