#include <stdio.h>

int n, s, i, t;
int main() {
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &t), s += t;
	printf("%d", s - n + 1);
	return 0;
}