#include <stdio.h>

int main() {
	int i, j, s = 0, a, b, m = 0;
	for (i = 0; i < 4; i++) {
		scanf("%d %d", &a, &b);
		s += b - a, m = m > s ? m : s;
	}
	printf("%d", m < 10000 ? m : 10000);
	return 0;
}