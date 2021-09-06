#include <stdio.h>
#include <string.h>

typedef struct {
	char n[51];
	int c;
} node;

node a[1001];
int n, i, m, e;
char s[1001][51], *b;

int _c(char a[51], char b[51]) {
	return strcmp(b, a);
}

int main() {
	scanf("%d", &n);
	for (; i < n; i++)
		scanf("%s", s[i]);
	qsort(s, n, 51, _c);
	strcpy(a[e].n, s[0]), a[e].c = 1, e++;
	for (i = 1; i < n; i++) {
		if (strcmp(s[i], s[i - 1]))
			strcpy(a[e].n, s[i]), a[e].c = 1, e++;
		else
			a[e - 1].c++;
	}
	for (i = 0; i < e; i++)
		if (a[i].c >= m)
			b = a[i].n, m = a[i].c;
	printf("%s", b);
	return 0;
}