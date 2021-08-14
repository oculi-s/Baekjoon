#include <stdio.h>

int main() {
	int x[4], y[4], i, m = 0, n = 10, d = 0;
	scanf("%d %d %d %d", &x[0], &y[0], &x[1], &y[1]);
	scanf("%d %d %d %d", &x[2], &y[2], &x[3], &y[3]);
	for (i = 0; i < 4; i++)
		m = m > x[i] ? m : x[i], n = n < x[i] ? n : x[i];
	d = d > m - n ? d : m - n, m = 0, n = 10;
	for (i = 0; i < 4; i++)
		m = m > y[i] ? m : y[i], n = n < y[i] ? n : y[i];
	d = d > m - n ? d : m - n;
	printf("%d", d * d);
	return 0;
}