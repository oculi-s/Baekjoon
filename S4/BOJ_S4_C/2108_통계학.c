#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int* _c(int* a, int* b) {
	return *a - *b;
}

int x[500000], y[500000][2], c = 0, e = 0, m = 0, n, i, t;
int main() {
	double s = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", x + i), s += x[i];
	qsort(x, n, sizeof(int), _c);
	y[0][0] = x[0], y[0][1] = 1;
	for (i = 1; i < n; i++)
		if (x[i] == x[i - 1])
			y[e][1]++;
		else
			e++, y[e][0] = x[i], y[e][1] = 1;
	for (i = 0; i <= e; i++)
		m = m > y[i][1] ? m : y[i][1];
	printf("%d\n%d\n", (int)round(s / n), x[n / 2]);
	for (i = 0; i <= e && c < 2; i++)
		if (y[i][1] == m)
			c++, t = i;
	printf("%d\n%d", y[t][0], x[n - 1] - x[0]);
	return 0;
}