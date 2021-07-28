#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef unsigned short us;
unsigned int c[3] = { 0,0,0 };
short **p;

bool _check(us y, us x, us n) {
	us i, j;
	for (i = y; i < y + n; i++)
		for (j = x; j < x + n; j++)
			if (p[i][j] != p[y][x])
				return 0;
	return 1;
}

void _count(us y, us x, us n) {
	us i, j;
	if (_check(y, x, n))
		c[p[y][x] + 1]++;
	else
		for (i = y; i < y + n; i += n / 3)
			for (j = x; j < x + n; j += n / 3)
				_count(i, j, n / 3);
}

int main() {
	us n, i, j;
	scanf("%hu", &n);
	p = malloc(sizeof(short*) * n);
	for (i = 0; i < n; i++) {
		p[i] = malloc(sizeof(short) * n);
		for (j = 0; j < n; j++)
			scanf("%hd", &p[i][j]);
	}
	_count(0, 0, n);
	printf("%u\n%u\n%u", c[0], c[1], c[2]);
	return 0;
}