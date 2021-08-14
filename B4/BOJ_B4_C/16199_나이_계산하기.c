#include <stdio.h>

int main() {
	int y1, m1, d1, y2, m2, d2;
	scanf("%d %d %d\n%d %d %d", &y1, &m1, &d1, &y2, &m2, &d2);
	printf("%d\n%d\n%d", y2 - y1 - 1 + (m2 > m1 ? 1 : (m2 == m1 && d2 >= d1)), y2 - y1 + 1, y2 - y1);
	return 0;
}