#include <stdio.h>

int len(int* t) {
	int i;
	for (i = 0; i < 9; i++)
		if (!t[i])
			return i;
}

void _copy(int* a, int* t, int n) {
	int i;
	for (i = 0; i < n; i++)
		a[i] = t[i];
}

int s[100][9], e = 1, * t;
int main() {
	int n, m, i, j, k;
	scanf("%d %d", &n, &m);
	for (e = 0; e < n; e++)
		s[e][0] = n - e;
	while (e) {
		e--, t = s[e], j = len(t);
		if (j == m) {
			for (k = 0; k < j; k++)
				printf("%d ", t[k]), t[k] = 0;
			printf("\n");
		}
		else if (t[j - 1] == n)
			for (k = 0; k < j; k++)
				t[k] = 0;
		else {
			for (i = n; i > t[j - 1]; i--) {
				_copy(s[e], t, j);
				s[e][j] = i, e++;
			}
		}
	}
	return 0;
}