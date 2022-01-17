#include <stdio.h>

unsigned long long n, i, j, a[101], t;
int main() {
	scanf("%llu", &n);
	for (i = 1; i <= n; i++)
		scanf("%llu", a + i);
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++)
			if (a[j] == a[i] * 2 || a[j] * 3 == a[i])
				break;
		if (j == n + 1)
			break;
	}
	t = a[n], a[n] = a[i], a[i] = t;
	for (i = n; i >= 2; i--)
		for (j = 1; j < i; j++)
			if (a[i] * 3 == a[j] || a[j] * 2 == a[i]) {
				t = a[j], a[j] = a[i - 1], a[i - 1] = t;
				break;
			}
	for (i = 1; i <= n; i++)
		printf("%llu ", a[i]);
	return 0;
}
