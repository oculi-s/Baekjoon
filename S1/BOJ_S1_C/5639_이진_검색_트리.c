#include <stdio.h>

typedef struct {
	int l;
	int r;
	int p;
}N;

N t[10001];
int x[10001];
int main() {
	int n = 1, i, p;
	while (scanf("%d", x + n) != EOF)
		n++;
	for (i = 0; i <= n; i++)
		t[i].l = -1, t[i].r = -1, t[i].p = -1;
	t[0].l = 1, t[0].r = 1, t[1].p = 0, p = 1;
	for (i = 2; i < n; i++) {
		if (x[i] < x[p])
			t[p].l = i, t[i].p = p, p = i;
		else {
			while (x[i] > x[p] && p)
				p = t[p].p;
			p = t[p].l;
			while (x[i] > x[p] && t[p].r != -1)
				p = t[p].r;
			t[p].r = i, t[i].p = p, p = i;
		}
	}
	p = 1;
	while (p) {
		while (1) {
			if (t[p].l != -1)
				p = t[p].l;
			else if (t[p].r != -1)
				p = t[p].r;
			else
				break;
		}
		printf("%d\n", x[p]);
		p = t[p].p;
		if (t[p].l != -1)
			t[p].l = -1;
		else
			t[p].r = -1;
	}
	return 0;
}