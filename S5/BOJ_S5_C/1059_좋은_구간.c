#include <stdio.h>
#include <stdlib.h>

int main() {
	int L, n, i, s[50];
	scanf("%d", &L);
	for (i = 0; i < L; i++)
		scanf("%d", s + i);
	scanf("%d", &n);
	for (i = 0; i < L; i++)
		if (s[i] == n) {
			printf("%d", 0);
			return 0;
		}
	int a = 1001, b = 1001;
	for (i = 0; i < L; i++) {
		if (s[i] >= n && s[i] - n < a)
			a = s[i] - n;
		else if (s[i] <= n && n - s[i] < b)
			b = n - s[i];
	}
	a = a == 1001 ? n : a;
	b = b == 1001 ? n : b;
	printf("%d", a * b - 1);
	return 0;
}