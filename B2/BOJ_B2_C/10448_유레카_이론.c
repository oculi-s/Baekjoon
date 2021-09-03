#include <stdio.h>

int t[51], i, j, k, a, n;
int _t() {
	for (i = 1; i <= 50; i++)
		for (j = i; j <= 50; j++)
			for (k = j; k <= 50; k++)
				if (a == t[i] + t[j] + t[k])
					return 1;
	return 0;
}

int main() {
	t[1] = 1;
	for (i = 2; i <= 50; i++)
		t[i] = t[i - 1] + i;
	scanf("%d", &n);
	while (n--)
		scanf("%d", &a), printf("%d\n", _t(a));
	return 0;
}