#include <stdio.h>

int n, a[100], i, s;
int main() {
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", a + i);
	for (i = 1; i < n; i++)
		if (a[i])
			a[i] += a[i - 1];
	for (i = 0; i < n; i++)
		s += a[i];
	printf("%d", s);
	return 0;
}