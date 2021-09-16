#include <stdio.h>

int n, k, i, x[10], l[10], s[5050], a[10], e;

int in(int v) {
	int i;
	for (i = 0; i < e; i++)
		if (s[i] == v)
			return 0;
	return 1;
}

void rec(int v, int t, int a[10]) {
	int i;
	if (t == k) {
		if (in(v))
			s[e] = v, e++;
	}
	else {
		for (i = 0; i < n; i++)
			if (a[i])
				a[i] = 0, rec(v * l[i] + x[i], t + 1, a), a[i] = 1;
	}
}

int main() {
	scanf("%d %d", &n, &k);
	for (i = 0; i < n; i++)
		scanf("%d", x + i), l[i] = x[i] < 10 ? 10 : 100, a[i] = 1;
	rec(0, 0, a);
	printf("%d", e);
	return 0;
}