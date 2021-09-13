#include <stdio.h>

int n, t;

int main() {
	scanf("%d\n%d", &n, &t);
	while (t)
		printf("%d is%sa multiple of %d.\n", t, t % n ? " NOT " : " ", n), scanf("%d", &t);
	return 0;
}