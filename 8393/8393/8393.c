#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	scanf_s("%d", &n);
	int s = 0;
	for (int i = 1; i < n + 1; i++) {
		s += i;
	}
	printf("%d", s);
	return 0;
}