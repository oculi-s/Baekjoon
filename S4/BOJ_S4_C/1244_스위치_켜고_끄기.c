#include <stdio.h>

int n, i, s[102], c, a, b, l, r;
int main() {
	scanf("%d", &n);
	s[0] = 2, s[n + 1] = -2;
	for (i = 1; i <= n; i++)
		scanf("%d", s + i);
	scanf("%d", &c);
	while (c--) {
		scanf("%d %d", &a, &b);
		if (a == 1) {
			for (i = b; i <= n; i += b)
				s[i] = !s[i];
		}
		else {
			l = b - 1, r = b + 1;
			while (s[l] == s[r])
				l--, r++;
			for (i = l + 1; i <= r - 1; i++)
				s[i] = !s[i];
		}
	}
	for (i = 1; i <= n; i++) {
		printf("%d ", s[i]);
		if (i % 20 == 0)
			printf("\n");
	}
	return 0;
}