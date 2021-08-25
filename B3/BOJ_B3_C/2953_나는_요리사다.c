#include <stdio.h>

int s, t, a, b, i, j;
int main() {
	for (i = 0; i < 5; i++) {
		a = 0;
		for (j = 0; j < 4; j++)
			scanf("%d", &t), a += t;
		if (a > s)
			s = a, b = i + 1;
	}
	printf("%d %d", b, s);
	return 0;
}