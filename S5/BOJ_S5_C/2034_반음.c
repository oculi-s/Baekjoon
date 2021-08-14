#include <stdio.h>
#include <stdbool.h>

bool a[7], b[12];
int main() {
	int d[7] = { 0, 2, 3, 5, 7, 8, 10 }, n, i, j, t, c;
	scanf("%d", &n);
	for (i = 0; i < 12; i++)
		b[i] = 0;
	for (i = 0; i < 7; i++)
		b[d[i]] = 1, a[i] = 1;
	for (i = 0; i < n; i++) {
		scanf("%d", &t);
		for (j = 0; j < 7; j++)
			if (a[j]) {
				c = (d[j] + t + 24) % 12;
				if (b[c])
					d[j] = c;
				else
					a[j] = 0;
			}
	}
	for (i = 0; i < 7; i++)
		if (a[i]) {
			printf("%c %c\n", i + 65, (d[i] + 1 + (d[i] > 7)) / 2 + 65);
		}
	return 0;
}