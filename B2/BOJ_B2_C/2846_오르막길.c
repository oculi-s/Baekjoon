#include <stdio.h>

int n, i, c, m, t, h;
int main() {
	scanf("%d\n%d", &n, &t);
	h = t;
	for (; i < n - 1; i++) {
		scanf("%d", &t);
		if (t > h)
			c += t - h;
		else
			m = m > c ? m : c, c = 0;
		h = t;
	}
	m = m > c ? m : c;
	printf("%d", m);
	return 0;
}