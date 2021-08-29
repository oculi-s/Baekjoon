#include <stdio.h>

int n, a, b, s;
int main() {
	scanf("%d", &n);
	while (n--) {
		scanf("%d %d", &a, &b);
		s += b % a;
	}
	printf("%d", s);
	return 0;
}