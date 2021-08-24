#include <stdio.h>

int main() {
	char a[6] = "DCBAE";
	int i, j, s, t;
	for (i = 0; i < 3; i++) {
		s = 0;
		for (j = 0; j < 4; j++) {
			scanf("%d", &t);
			s += t;
		}
		printf("%c\n", a[s]);
	}
	return 0;
}