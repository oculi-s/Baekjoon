#include <stdio.h>
#include <stdlib.h>

int c(int *a, int *b) {
	return *a - *b;
}

int main() {
	int t, s[10];
	scanf("%d", &t);
	while (t--) {
		for (int i = 0; i < 10; i++)
			scanf("%d", s + i);
		qsort(s, 10, sizeof(int), c);
		printf("%d\n", s[7]);
	}
	return 0;
}