#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int i, g, s, b;
} node;

int _c(node* a, node* b) {
	if ((*a).g == (*b).g) {
		if ((*a).s == (*b).s)
			return (*b).b - (*a).b;
		else
			return (*b).s - (*a).s;
	}
	else
		return (*b).g - (*a).g;
}

int n, k, i, j, g, s, b;
node c[1001];
int main() {
	scanf("%d %d", &n, &k);
	for (; i < n; i++)
		scanf("%d %d %d %d", &j, &g, &s, &b), c[j].i = j, c[j].g = g, c[j].s = s, c[j].b = b;
	qsort(&(c[1]), n, sizeof(node), _c);
	for (i = 1; i <= n; i++)
		if (c[i].i == k) {
			g = c[i].g, s = c[i].s, b = c[i].b;
			while (c[i].g == g && c[i].s == s && c[i].b == b)
				i--;
			printf("%d", i + 1);
			break;
		}
	return 0;
}