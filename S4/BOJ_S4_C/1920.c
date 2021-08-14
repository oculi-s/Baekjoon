#include <stdio.h>
#include <stdlib.h>

void insort(int* a, int t, int r, int N) {
	int l = 0, m;
	while (l < r) {
		m = (l + r) / 2;
		if (a[m] > t)
			r = m;
		else
			l = m + 1;
	}
	for (int j = N - 1; j > r; j--)
		a[j] = a[j - 1];
	a[r] = t;
}

int bisect(int* a, int t, int r) {
	int l = 0, m;
	while (l < r) {
		m = (l + r) / 2;
		if (a[m] >= t)
			r = m;
		else
			l = m + 1;
	}
	return r;
}

int main() {
	int N, M, t, i, j;
	scanf("%d", &N);
	int* a = malloc(sizeof(int) * N);
	for (i = 0; i < N; i++) {
		scanf("%d", &t);
		insort(a, t, i, N);
	}
	scanf("%d", &M);
	for (i = 0; i < M; i++) {
		scanf("%d", &t);
		j = bisect(a, t, N);
		printf("%d\n", a[j] == t);
	}
	return 0;
}