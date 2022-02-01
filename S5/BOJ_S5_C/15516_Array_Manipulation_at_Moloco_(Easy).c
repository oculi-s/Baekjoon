#include <stdio.h>

int n, a[1000], s[1000], i, j;
int main() {
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", a + i);
	for (i = 0; i < n; i++)
		for (j = 0; j < i; j++)
			if (a[j] < a[i])
				s[i]++;
	for (i = 0; i < n; i++)
		printf("%d\n", s[i]);
	return	0;
}
