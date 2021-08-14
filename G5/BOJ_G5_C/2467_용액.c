#include <stdio.h>

int n, i, j, a[100001], p, q;
int main() {
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", a + i);
	i = 0, j = n - 1, p = i, q = j;
	while (i < j) {
		if (abs(a[i] + a[j]) < abs(a[p] + a[q]))
			p = i, q = j;
		if (a[i] + a[j] > 0)
			j--;
		else
			i++;
	}
	printf("%d %d", a[p], a[q]);
}