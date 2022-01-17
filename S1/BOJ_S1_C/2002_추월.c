#include <stdio.h>
#include <string.h>

char a[1001][9], b[1001][9];
int n, i, j, k, l, c[1001], d;

int main() {
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%s", a[i]);
	for (i = 0; i < n; i++)
		scanf("%s", b[i]);
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			if (!strcmp(a[j], b[i]))
				break;
		for (k = j + 1; k < n; k++)
			if (!c[k])
				for (l = 0; l < i && !c[k]; l++)
					if (!strcmp(a[k], b[l]))
						c[k] = 1;
	}
	for (i = 0; i < n; i++)
		d += c[i];
	printf("%d", d);
	return 0;
}
