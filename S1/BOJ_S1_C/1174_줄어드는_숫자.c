#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, a[12] = { 1,0,0,0,0,0,0,0,0,0,0,0 }, c = 0;
	int s = 0, t = 0, i, j;
	scanf("%d", &n);
	if (n <= 10)
		printf("%d", n - 1);
	else if (n > 1023)
		printf("%d", -1);
	else {
		while (n > s + t) {
			a[11 - c] = 0, s += t, t = 0, i = 0;
			while (n > s + t && i < 10 - c)
				a[i + 1] += a[i], t += a[i++];
			c++;
		}
		while (n > 1) {
			if (i == 1)
				for (j = c; j > 0; j--)
					printf("%d", j - 1);
			else if (n > s)
				printf("%d", i + c - 2);
			n -= s + t - a[i - 1];
			if (n == 1 && i != 1)
				for (j = c - 1; j > 0; j--)
					printf("%d", j - 1);
			for (j = i; j >= 0; j--)
				a[j + 1] -= a[j];
			c--, s = 0, t = 0, i = 0;
			while (n > s + t) {
				t += a[i++];
			}
		}
	}
	return 0;
}