#include <stdio.h>

typedef struct {
	char n[61];
	int a;
}node;

int n, i, c = 1, t;
node s[101];
char a[2];
int main() {
	scanf("%d\n", &n);
	while (n) {
		for (i = 1; i <= n; i++)
			gets(s[i].n), s[i].a = 0;
		for (i = 0; i < 2 * n - 1; i++)
			scanf("%d %s", &t, a), s[t].a++;
		for (i = 1; i <= n; i++)
			if (s[i].a % 2)
				printf("%d %s\n", c, s[i].n);
		scanf("%d\n", &n), c++;
	}
	return 0;
}
