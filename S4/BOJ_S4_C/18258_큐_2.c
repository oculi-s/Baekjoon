#include <stdio.h>

int x[2000001], n, i, f, e, t;
char s[10];
int main() {
	scanf("%d", &n);
	for (; i < n; i++) {
		scanf("%s", s);
		if (s[1] == 'r')
			printf("%d\n", f == e ? -1 : x[f]);
		else if (s[1] == 'a')
			printf("%d\n", f == e ? -1 : x[e - 1]);
		else if (s[1] == 'm')
			printf("%d\n", f == e);
		else if (s[1] == 'i')
			printf("%d\n", e - f);
		else if (s[1] == 'o' && f == e)
			printf("-1\n");
		else if (s[1] == 'o')
			printf("%d\n", x[f++]);
		else
			scanf("%d", &t), x[e++] = t;
	}
	return 0;
}