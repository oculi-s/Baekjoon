#include <stdio.h>

int _min(int a, int b) {
	return a < b ? a : b;
}

int a[1000001];
int main() {
	int n, i;
	scanf("%d", &n);
	a[1] = 0;
	for (i = 2; i <= n; i++) {
		a[i] = a[i - 1] + 1;
		if (i % 2 == 0 && i > 1)
			a[i] = _min(a[i], a[i / 2] + 1);
		if (i % 3 == 0 && i > 2)
			a[i] = _min(a[i], a[i / 3] + 1);
	}
	printf("%d", a[i - 1]);
	return 0;
}