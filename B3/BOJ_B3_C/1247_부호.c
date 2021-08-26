#include <stdio.h>
#include <stdlib.h>

typedef long long ld;

ld* _c(ld* a, ld* b) {
	if (*a > *b)
		return 1;
	else if (*a < *b)
		return -1;
	else
		return 0;
}

ld x[100000];
int n, i, j, f, e;
int main() {
	for (; i < 3; i++) {
		scanf("%d", &n);
		f = 0, e = n - 1;
		for (j = 0; j < n; j++)
			scanf("%lld", x + j);
		qsort(x, n, sizeof(ld), _c);
		if (x[f] > 0)
			printf("+\n");
		else if (x[e] < 0)
			printf("-\n");
		else {
			while (f < e) {
				if (x[e] + x[f] > 0)
					x[e] += x[f], f++;
				else if (x[e] + x[f] < 0)
					x[f] += x[e], e--;
				else
					x[f] = 0, x[e] = 0, e--, f++;

				if (x[e] < 0 || x[f] > 0)
					break;
			}
			printf("%c\n", x[f] == 0 ? '0' : x[f] > 0 ? '+' : '-');
		}
	}
	return 0;
}