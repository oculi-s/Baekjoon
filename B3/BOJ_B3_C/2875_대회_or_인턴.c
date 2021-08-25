#include <stdio.h>

int m, n, k;
int main() {
	scanf("%d %d %d", &m, &n, &k);
	while (k) {
		if (m >= 2 * n)
			m--;
		else
			n--;
		k--;
	}
	m /= 2;
	printf("%d", m < n ? m : n);
	return 0;
}