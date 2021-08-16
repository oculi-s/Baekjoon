#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, c, n;
	scanf("%d %d %d", &a, &b, &c);
	n = a * b * c;
	int s[10] = { 0,0,0,0,0,0,0,0,0,0 };
	while (n > 0) {
		s[n % 10] += 1;
		n /= 10;
	}
	for (int i = 0; i < 10; i++)
		printf("%d\n", s[i]);
	return 0;
}