#include <stdio.h>

int main() {
	int i, j, m = -1, n = -1, t, c = 100;
	char a[50], b[50];
	scanf("%s %s", a, b);
	while (a[++m]);
	while (b[++n]);
	for (i = 0; i <= n - m; i++) {
		t = 0;
		for (j = 0; j < m; j++)
			t += a[j] != b[i + j];
		c = c < t ? c : t;
	}
	printf("%d", c);
	return 0;
}