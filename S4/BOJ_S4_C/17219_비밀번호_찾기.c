#include <stdio.h>
#include <string.h>

typedef struct {
	char n[21], p[21];
	int l;
} node;

node s[100000];
char t[21];

int _c(node* a, node* b) {
	return strcmp((*a).n, (*b).n);
}

int n, m, i, j;
int _bisect() {
	int l = 0, r = n, m;
	while (l < r) {
		m = (l + r) / 2;
		if (strcmp(s[m].n, t) >= 0)
			r = m;
		else
			l = m + 1;
	}
	return r;
}

int main() {
	scanf("%d %d", &n, &m);
	for (i = 0; i < n; i++)
		scanf("%s %s", s[i].n, s[i].p);
	qsort(s, n, sizeof(node), _c);
	for (i = 0; i < m; i++) {
		scanf("%s", t);
		printf("%s\n", s[_bisect()].p);
	}
	return 0;
}