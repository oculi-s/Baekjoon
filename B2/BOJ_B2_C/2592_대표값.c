#include <stdio.h>

int s, x[1001], i, t, m;
int main() {
	for (; i < 10; i++)
		scanf("%d", &t), s += t, x[t]++;
	for (i = 0; i <= 1000; i++)
		m = x[i] > x[m] ? i : m;
	printf("%d\n%d", s / 10, m);
	return 0;
}