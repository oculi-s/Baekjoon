#include <stdio.h>

int main() {
	int n, i, j, s, c;
	scanf("%d", &n);
	s = 0;
	for (j = 1; j <= n; j++)
		s += j;
	c = s % 2;
	for (i = 2; i <= 100 - n + 1; i++) {
		s = 0;
		for (j = 0; j < n; j++)
			s += i + j;
		if (!c && s % 2 || c && !(s % 2)) {
			c = 2;
			break;
		}
		c = s % 2;
	}
	printf("%s", !c ? "Even" : c == 1 ? "Odd": "Either");
	return 0;
}