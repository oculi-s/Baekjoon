#include <stdio.h>

void _qsort(int* a, int n) {
	if (n) {
		int L = 1, H = n-1, t;
		while (L) {
			while (L < n && a[0] >= a[L]) { L++; }
			while (0 < H && a[0] <= a[H]) { H--; }
			if (L >= H)
				L = 0;
			t = a[L], a[L] = a[H], a[H] = t;
		}
		_qsort(a, H), _qsort(a + H + 1, n - H - 1);
	}
}

int main() {
	int n, a[50], b[50], i, s = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", a + i);
	for (i = 0; i < n; i++)
		scanf("%d", b + i);
	_qsort(a, n), _qsort(b, n);
	for (i = 0; i < n; i++)
		s += a[i] * b[n - 1 - i];
	printf("%d", s);
	return 0;
}