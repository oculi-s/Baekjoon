#include <stdio.h>
#include <stdlib.h>

int main() {
	int h, m;
	scanf_s("%d %d", &h, &m);
	m -= 45;
	h -= (int)(m < 0);
	m += 60 * (int)(m < 0);
	h += 24 * (int)(h < 0);
	printf("%d %d", h, m);
	return 0;
}