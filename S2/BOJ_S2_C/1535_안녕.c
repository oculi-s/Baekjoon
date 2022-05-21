#include <stdio.h>

int n, a[20], b[20], i, m;

void rec(int s, int l, int j) {
	int i;
	m = m > j ? m : j;
	for (i = s + 1; i < n; i++)
		if (l > a[i])
			rec(i, l - a[i], j + b[i]);
}

int main() {
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", a + i);
	for (i = 0; i < n; i++)
		scanf("%d", b + i);
	rec(-1, 100, 0);
	printf("%d", m);
	return 0;
}
