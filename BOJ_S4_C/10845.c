#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, * q, i, f, b, v;
	char s[20];
	scanf("%d", &n);
	q = malloc(sizeof(int) * 10000);
	f = 0, b = 0;
	for (i = 0; i < n; i++) {
		scanf("%s", s);
		if (s[1] == 'u')
			scanf("%d", &v), q[b++] = v;
		else if (s[0] == 'f')
			printf("%d\n", b == f ? -1 : q[f]);
		else if (s[0] == 'b')
			printf("%d\n", b == f ? -1 : q[b-1]);
		else if (s[0] == 's')
			printf("%d\n", b - f);
		else if (s[0] == 'e')
			printf("%d\n", b == f);
		else
			printf("%d\n", b == f ? -1 : q[f++]);
	}
	return 0;
}