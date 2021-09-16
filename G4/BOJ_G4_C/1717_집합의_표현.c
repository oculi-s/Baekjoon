#include <stdio.h>
#define M 1000001

int n, m, i, x[M], a, b, c;

int find(int b) {
	if (x[b] == b)
		return b;
	else
		return x[b] = find(x[b]);
}

int main() {
	scanf("%d %d", &n, &m);
	for (i = 0; i <= n; i++)
		x[i] = i;
	for (i = 1; i <= m; i++) {
		scanf("%d %d %d", &a, &b, &c);
		b = find(b), c = find(c);
		if (a)
			printf("%s\n", b == c ? "YES" : "NO");
		else if (b < c)
			x[b] = c;
		else if (b > c)
			x[c] = b;
	}
	return 0;
}