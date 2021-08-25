#include <stdio.h>

int n, a = 5, s;
int main() {
	scanf("%d", &n);
	while (a <= n) {
		s += n / a, a *= 5;
	}
	printf("%d", s);
	return 0;
}