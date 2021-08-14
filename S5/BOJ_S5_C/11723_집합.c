#include <stdio.h>
#include <stdbool.h>

bool s[21];
int main() {
	int n, i, t;
	char c[10];
	scanf("%d", &n);
	while (n--) {
		scanf("%s", c);
		if (c[2] == 'l' || c[2] == 'p')
			for (i = 1; i <= 20; i++)
				s[i] = c[2] == 'l';
		else {
			scanf("%d", &t);
			if (c[0] == 'a' || c[0] == 'r')
				s[t] = c[0] == 'a';
			else if (c[0] == 'c')
				printf("%d\n", s[t]);
			else if (c[0] == 't')
				s[t] = !s[t];
		}
	}
	return 0;
}