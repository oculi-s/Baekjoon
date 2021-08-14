#include <stdio.h>

int main() {
	int k, a[12], b[12], i, s;
	scanf("%d", &k);
	for (i = 0; i < 6; i++)
		scanf("%d %d", a + i, b + i), a[i + 6] = a[i], b[i + 6] = b[i];
	for (i = 0; i < 6; i++)
		if (a[i] == a[i + 2] && a[i + 1] == a[i + 3])
			s = (b[i] * b[i + 3] + b[i] * b[i + 1] + b[i + 2] * b[i + 3]);
	printf("%d", s * k);
	return 0;
}