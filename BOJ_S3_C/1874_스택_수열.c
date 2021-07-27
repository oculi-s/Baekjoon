#include <stdio.h>

int main() {
	int n, * s, * a, i, j, f = 0, e = 1;
	scanf("%d", &n);
	char* c = malloc(sizeof(char) * 2 * (n + 1));
	a = malloc(sizeof(int) * (n + 1));
	s = malloc(sizeof(int) * (n + 1));
	for (i = 0; i < n; i++)
		scanf("%d", a + i);
	i = 1, j = 0;
	while (e > 0 && f < n) {
		if (s[e - 1] == a[f])
			c[j] = '-', e--, f++;
		else if (s[e - 1] < a[f])
			c[j] = '+', s[e++] = i++;
		else
			break;
		j++;
	}
	if (f == n) {
		for (i = 0; i < j - 1; i++)
			printf("%c\n", c[i]);
		printf("%c", c[i]);
	}
	else
		printf("NO");
	return 0;
}