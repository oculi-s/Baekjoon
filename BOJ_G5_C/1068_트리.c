#include <stdio.h>

typedef struct n {
	int p;
	int c;
}n;

n tree[50];
int main() {
	int n, i, j, t, d, a = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		tree[i].c = 0;
	for (i = 0; i < n; i++) {
		scanf("%d", &t), tree[i].p = t;
		if (t != -1)
			tree[t].c++;
	}
	scanf("%d", &d), tree[d].c = 0, tree[tree[d].p].c--;
	for (i = 0; i< n; i++)
		if (!tree[i].c && i != d) {
			j = tree[i].p;
			while (j != -1 && tree[j].c)
				j = tree[j].p;
			a += j == -1;
		}
	printf("%d", a);
	return 0;
}