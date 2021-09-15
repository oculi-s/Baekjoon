#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int v, p;
	char c;
} node;

node s[10000];
char c[1000], d[10000], C[4] = "DSLR";
int t, f, e, a, b, v, i, k[4][10000];

int main() {
	scanf("%d", &t);
	for (i = 0; i < 10000; i++) {
		k[0][i] = i * 2 % 10000;
		k[1][i] = (i + 9999) % 10000;
		k[2][i] = i % 1000 * 10 + i / 1000;
		k[3][i] = i % 10 * 1000 + i / 10;
	}
	while (t--) {
		scanf("%d %d", &a, &b);
		s[0].v = a, d[a] = 1, e = 0;
		while (1) {
			v = s[f].v;
			if (v == b) {
				i = 0;
				while (f)
					c[i] = s[f].c, f = s[f].p, i++;
				while (i--)
					printf("%c", c[i]);
				printf("\n");
				break;
			}
			for (i = 0; i < 4; i++)
				if (!d[k[i][v]])
					e++, d[k[i][v]] = 1, s[e].v = k[i][v], s[e].c = C[i], s[e].p = f;
			f++;
		}
		for (i = 0; i < 10000; i++)
			d[i] = 0;
	}
	return 0;
}