#include <stdio.h>

int main() {
	int n, c, o;
	scanf("%d", &n);
	o = n, c = n / 5, n %= 5;
	while (n % 2 && n <= o)
		n += 5, c--;
	printf("%d", n > o ? -1 : c + n / 2);
	return 0;
}