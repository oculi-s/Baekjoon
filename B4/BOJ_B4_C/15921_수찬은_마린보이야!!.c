#include <stdio.h>

int main() {
	int n, t, s = 0;
	scanf("%d", &n);
	while (n--)
		scanf("%d", &t), s += t;
	printf("%s", s ? "1.00" : "divide by zero");
	return 0;
}