#include <stdio.h>

void _qsort(int* a, int n) {
	if (n) {
		int L = 1, H = n - 1, t;
		while (L) {
			while (L <= H && a[0] >= a[L]) { L++; }
			while (L <= H && a[0] <= a[H]) { H--; }
			if (L >= H)
				L = 0;
			t = a[L], a[L] = a[H], a[H] = t;
		}
		_qsort(a, H), _qsort(a + H + 1, n - H - 1);
	}
}

int _bisect(int* a, int x, int l, int r) {
	int m, z = r;
	while (l < r) {
		m = (l + r) / 2;
		if (a[m] >= x)
			r = m;
		else
			l = m + 1;
	}
	return r < z ? r : z;
}

int n, i, a[1000];
int main() {
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", a + i);
	_qsort(a, n);
	int x, y, z, k;
	for (k = n - 1; k >= 0; k--)
		for (z = k - 1; z >= 0; z--)
			for (y = _bisect(a, a[k] - a[z], 0, z); y >= 0; y--) {
				x = _bisect(a, a[k] - a[z] - a[y], 0, y);
				if (a[x] + a[y] + a[z] == a[k]) {
					printf("%u", a[k]);
					return 0;
				}
			}
}