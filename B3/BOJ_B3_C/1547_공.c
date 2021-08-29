#include <stdio.h>

int n, a, b, i, p = 1;
int main() {
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		if (a == p)
			p = b;
		else if (b == p)
			p = a;
	}
	printf("%d", p);
	return 0;
}