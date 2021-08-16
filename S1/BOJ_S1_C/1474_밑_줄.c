#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int n, m, i, j, a = 0;
	scanf("%d %d", &n, &m);
	int d[11] = { 0,0,0,0,0,0,0,0,0 };
	int b[12] = { 0,0,0,0,0,0,0,0,0,0 };
	char s[15][15];
	for (i = 0; i < n; i++)
		scanf("%s", s[i]), a += strlen(s[i]), b[i] += s[i][0] > 91;
	m -= a;
	for (i = 0; i < n - 1; i++)
		d[i] = m / (n - 1);
	a = m / (n - 1) + 1, m %= n - 1;
	if (m)
		for (i = 0; i < n - 1; i++) {
			d[i] += b[i + 1], m -= b[i + 1];
			if (m == 0)
				break;
		}
	if (m)
		for (i = n - 2; i >= 0; i--)
			if (d[i] != a) {
				d[i]++, m--;
				if (m == 0)
					break;
			}
	for (i = 0; i < n - 1; i++) {
		printf("%s", s[i]);
		for (j = 0; j < d[i]; j++) {
			printf("%c", '_');
		}
	}
	printf("%s", s[n - 1]);
	return 0;
}