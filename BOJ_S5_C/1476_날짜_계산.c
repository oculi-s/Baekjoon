#include <stdio.h>

int main() {
	int e, s, m;
	scanf("%d %d %d", &e, &s, &m);
	while ((e % 28 != s % 28) || (e % 19 != m % 19))
		e += 15;
	printf("%d", e);
	return	0;
}