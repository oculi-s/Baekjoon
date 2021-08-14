#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char s[21];
	int n;
} P;

int* _c(P* a, P* b) {
	return strcmp((*a).s, (*b).s);
}

P p[100001];
char s[100001][21], t[21];
int main() {
	int n, m, i, j, l, r, c, b;
	scanf("%d %d", &n, &m);
	for (i = 1; i <= n; i++)
		scanf("%s", s[i]), strcpy(p[i].s, s[i]), p[i].n = i;
	qsort(&(p[1]), n, sizeof(P), _c);
	for (i = 0; i < m; i++) {
		scanf("%s", t);
		if (t[0] <= '9' && t[0] >= '0')
			printf("%s\n", s[atoi(t)]);
		else {
			l = 1, r = n;
			while (l < r) {
				c = (l + r) / 2;
				b = strcmp(p[c].s, t);
				if (b > 0)
					r = c - 1;
				else if (b < 0)
					l = c + 1;
				else
					r = c, l = c;
			}
			printf("%d\n", p[r].n);
		}
	}
	return 0;
}