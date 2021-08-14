#include <stdio.h>

void _r(int* p, int* q, int s, int e) {
	int a = p[s], b = q[s], i;
	for (i = s; i < e - 1; i++)
		p[i] = p[i + 1], q[i] = q[i + 1];
	p[i] = a, q[i] = b;
}

int main() {
	int t, n, k, i, j, p[100], q[100];
	scanf("%d", &t);
	while (t--) {
		scanf("%d %d", &n, &k);
		for (i = 0; i < n; i++)
			scanf("%d", p + i), q[i] = i;
		for (i = 0; i < n - 1; i++)
			for (j = i + 1; j < n; j++)
				if (p[i] < p[j]) {
					_r(p, q, i, n), i--;
					break;
				}
		i = 0;
		while (q[i] != k)
			i++;
		printf("%d\n", i + 1);
	}
	return 0;
}