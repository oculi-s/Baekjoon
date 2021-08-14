#include <stdio.h>

typedef struct {
	int l;
	int r;
}n;

n s[1000];
int main() {
	int n, k, i, j, p;
	scanf("%d %d", &n, &k);
	for (i = 1; i <= n; i++)
		s[i].l = i - 1, s[i].r = i + 1;
	s[1].l = n, s[n].r = 1, p = k;
	printf("<");
	for (i = 0; i < n - 1; i++) {
		printf("%d, ", p);
		s[s[p].l].r = s[p].r, s[s[p].r].l = s[p].l;
		for (j = 0; j < k; j++)
			p = s[p].r;
	}
	printf("%d>", p);
	return 0;
}