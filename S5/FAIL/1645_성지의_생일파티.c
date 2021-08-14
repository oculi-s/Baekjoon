#include <stdio.h>

int main() {
	int n, i, s[10000], c[10001], m = 0;
	scanf("%d", &n);
	for (i = 0; i <= n; i++)
		c[i] = 0;
	for (i = 0; i < n; i++)
		scanf("%d", s+i), m = m > s[i] ? m : s[i];
	if (m >= n)
		printf("%d", m + 1);
	else {
		for (i = 0; i < n; i++)
			c[s[i]] ++;
		for (i = n - 1; i >= 0; i--)
			if (c[i] >= n - i + 1)
				break;
		if (i < 0)
			printf("%d", m);
		else
			printf("%d", i + 1);
	}
	return 0;
}