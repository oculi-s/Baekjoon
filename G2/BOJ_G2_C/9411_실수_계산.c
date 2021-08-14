#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int _dig(char* a, int n) {
	int i = 0;
	while (a[i] != '.' && i < n) { i++; }
	if (i != n)
		strcpy(a + i, a + i + 1);
	else
		a[i] = '0', a[i + 1] = 0;
	return i;
}

void _sum(char* a, char* b, char* c, int m, int n, int s, int d, int e) {
	int u = 0, l, t = 0;
	l = 1 + (m > n ? m : n), b[l] = 0;
	s = s ? 1 : -1;
	while (l) {
		t = u * s, l--;
		if (m)
			m--, t += a[m] - 48;
		if (n)
			n--, t += (b[n] - 48) * s;
		if (s == 1)
			b[l] = t % 10 + 48, u = t >= 10;
		else
			b[l] = (t + 10) % 10 + 48, u = t < 0;
	}
	d = 1 + (d > e ? d : e);
	strcpy(c, b + d), strcpy(b + d + 1, c), b[d] = '.';
	if (!t)
		strcpy(b, b + 1);
}

int main() {
	int t, m, n, d, e, i, p, ma, mb, L, s;
	scanf("%d", &t);
	while (t--) {
		char* a = malloc(sizeof(char) * 30);
		char* b = malloc(sizeof(char) * 30);
		char* c = malloc(sizeof(char) * 30);
		strcpy(b, "0.0"), scanf("%s", a);
		while (strcmp(a, "0")) {
			ma = a[0] == '-', mb = b[0] == '-', a += ma, b += mb, s = (ma && mb) || (!ma && !mb);
			m = strlen(a), n = strlen(b), d = _dig(a, m), e = _dig(b, n), m += 2 * (d == m);
			if (m - d < n - e) {
				p = strlen(a);
				for (i = p; i < p + n + d - m - e; i++)
					a[i] = '0';
				a[p + n + d - m - e] = 0;
			}
			else {
				p = strlen(b);
				for (i = p; i < p + m + e - n - d; i++)
					b[i] = '0';
				b[p + m + e - n - d] = 0;
			}
			m = strlen(a), n = strlen(b), L = m != n ? m > n : strcmp(a, b) > 0;
			if (L)
				_sum(a, b, c, m, n, s, d, e);
			else
				_sum(b, a, c, n, m, s, e, d), strcpy(b, a);

			while (b[0] == '0' && b[1] != '.') { b++; }
			if ((ma && mb) || (L && ma) || (!L && mb))
				strcpy(c, b), strcpy(b + 1, c), b[0] = '-';
			scanf("%s", a);
		}
		n = strlen(b) - 1;
		while (b[n] == '0') { n--; }
		if (b[n] == '.')
			n--;
		b[n + 1] = 0;
		if (!strcmp(b, "-0"))
			b++;
		printf("%s\n", b);
	}
}