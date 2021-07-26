#include <stdio.h>
#include <stdlib.h>

int main() {
	int t;
	scanf("%d", &t);
	int *s = malloc(sizeof(int) * t);
	for (int i = 0; i < t; i++) {
		scanf("%d", s + i);
	}
	int m = -1000001, n = 1000001;
	for (int i = 0; i < t; i++) {
		m = m > s[i] ? m : s[i];
		n = n > s[i] ? s[i] : n;
	}
	printf("%d %d", n, m);
	return 0;
}