#include <stdio.h>

int t, n, a[1001], b, m;
int main() {
	scanf("%d", &t);
	while (t--) {
		m = 0;
		for (n = 1; n <= 1000; n++)
			a[n] = 0;
		scanf("%d", &n);
		while (n--)
			scanf("%d", &b), a[b]++;
		for (n = 1; n <= 1000; n++)
			if (a[n] > m)
				m = a[n];
		for (n = 1; n <= 1000; n++)
			if (a[n] == m) {
				printf("%d\n", n);
				break;
			}
	}
	return 0;
}
