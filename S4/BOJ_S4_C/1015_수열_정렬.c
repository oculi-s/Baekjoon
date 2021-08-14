#include <stdio.h>

int main() {
	int n, i, s, a[50], b[50], c = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", a + i);
	for (s = 1; s <= 1000; s++) {
		for (i = 0; i < n; i++)
			if (a[i] == s)
				b[i] = c++;
	}
	for (i = 0; i < n; i++)
		printf("%d ", b[i]);
	return 0;
}