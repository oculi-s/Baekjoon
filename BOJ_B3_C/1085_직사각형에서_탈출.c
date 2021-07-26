#include <stdio.h>

int main() {
	int x, y, w, h, m;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	m = x < y ? x : y;
	m = m < w - x ? m : w - x;
	m = m < h - y ? m : h - y;
	printf("%d", m);
	return 0;
}