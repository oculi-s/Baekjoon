#include <stdio.h>

int d[20000];
int main() {
	int n, e = 10000, f = 10001, t;
	char s[11];
	scanf("%d", &n);
	while (n--) {
		scanf("%s", s);
		if (s[0] == 'e')
			printf("%d\n", e < f);
		else if (s[0] == 's')
			printf("%d\n", e - f + 1);
		else if (s[0] == 'f')
			printf("%d\n", f <= e ? d[f] : -1);
		else if (s[0] == 'b')
			printf("%d\n", f <= e ? d[e] : -1);
		else if (s[1] == 'o' && s[4] == 'f')
			printf("%d\n", f <= e ? d[f++] : -1);
		else if (s[1] == 'o' && s[4] == 'b')
			printf("%d\n", f <= e ? d[e--] : -1);
		else if (s[1] == 'u' && s[5] == 'f')
			scanf("%d", &t), d[--f] = t;
		else if (s[1] == 'u' && s[5] == 'b')
			scanf("%d", &t), d[++e] = t;
	}
	return 0;
}