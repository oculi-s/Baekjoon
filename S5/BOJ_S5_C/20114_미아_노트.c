#include <stdio.h>

char s[10][1001], a[100];
int n, h, w, i, j, k;
int main() {
	scanf("%d %d %d", &n, &h, &w);
	for (i = 0; i < h; i++)
		scanf("%s", s[i]);
	for (i = 0; i < n; i++)
		a[i] = '?';
	for (i = 0; i < n; i++)
		for (j = 0; j < h; j++)
			for (k = 0; k < w; k++)
				if (s[j][i * w + k] != '?')
					a[i] = s[j][i * w + k];
	printf("%s", a);
	return 0;
}
