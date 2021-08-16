#include <stdio.h>
#include <stdlib.h>

int main() {
	int t, s = 0;
	int r[42];
	for (int i = 0; i < 42; i++) {
		r[i] = 0;
	}
	while (scanf("%d", &t) != EOF) {
		r[t % 42] = 1;
	}
	for (int i = 0; i < 42; i++) {
		s += r[i];
	}
	printf("%d", s);
	return 0;
}