#include <stdio.h>

int f(int n) {
	if (n % 2)
		return 0;
	else if (n == 2)
		return 3;
	else {
		int v = 3 * f(n - 2), i;
		for (i = 4; i < n; i += 2)
			v += 2 * f(n - i);
		return v + 2;
	}
}

int n;
int main() {
	scanf("%d", &n);
	printf("%d", f(n));
	return 0;
}
