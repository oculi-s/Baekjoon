#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	scanf("%d", &n);
	int a = n % 10, b = ((int)(n / 10) + n % 10) % 10;
	int c = 1;
	int t = a * 10 + b;
	while (t != n) {
		a = t % 10;
		b = ((int)(t / 10) + t % 10) % 10;
		c += 1;
		t = a * 10 + b;
	}
	printf("%d", c);
	return 0;
}