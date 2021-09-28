#include <stdio.h>

char a;
int t, n, i, j;
int main() {
	scanf("%d", &t);
	while (t--) {
		scanf("%d%c", &j, &a);
		i = 1;
		while (a != '\n') {
			scanf("%c", &a);
			if (i != j)
				printf("%c", a);
			i++;
		}
	}
	return 0;
}