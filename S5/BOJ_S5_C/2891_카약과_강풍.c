#include <stdio.h>

int n, s, r, t, a[11];
int main() {
	scanf("%d %d %d", &n, &s, &r);
	while (s--)
		scanf("%d", &t), a[t] = 1;
	while (r--) {
		scanf("%d", &t);
		if (a[t])
			a[t] = 0;
		else if (a[t - 1])
			a[t - 1] = 0;
		else if (a[t + 1])
			a[t + 1] = 0;
	}
	s = 0;
	for (t = 1; t <= n; t++)
		s += a[t];
	printf("%d", s);
	return 0;
}
