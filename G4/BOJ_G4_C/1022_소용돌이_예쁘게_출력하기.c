#include <stdio.h>
#include <math.h>

int _mabs(int a, int b) {
	a = a > 0 ? a : -a;
	b = b > 0 ? b : -b;
	return a > b ? a : b;
}

int main() {
	int r1, c1, r2, c2, i, j, n, s, m, t, d;
	scanf("%d %d %d %d", &r1, &c1, &r2, &c2);
	if (!r1 && !r2 && !c1 && !c2)
		printf("1");
	else {
		m = 0;
		for (i = r1; i <= r2; i++) {
			for (j = c1; j <= c2; j++) {
				n = _mabs(i, j), s = (2 * n - 1) * (2 * n - 1);
				if (j == n && i != n)
					t = s + n - i;
				else if (i == -n)
					t = s + 3 * n - j;
				else if (j == -n)
					t = s + 5 * n + i;
				else if (i == n)
					t = s + 7 * n + j;
				m = m > t ? m : t;
			}
		}
		d = log10(m) + 1;
		for (i = r1; i <= r2; i++) {
			for (j = c1; j <= c2; j++) {
				n = _mabs(i, j), s = (2 * n - 1) * (2 * n - 1);
				if (j == n && i != n)
					printf("%*d", d, s + n - i);
				else if (i == -n)
					printf("%*d", d, s + 3 * n - j);
				else if (j == -n)
					printf("%*d", d, s + 5 * n + i);
				else if (i == n)
					printf("%*d", d, s + 7 * n + j);
				if (j != c2)
					printf(" ");
			}
			if (i != r2)
				printf("\n");
		}
	}
	return 0;
}