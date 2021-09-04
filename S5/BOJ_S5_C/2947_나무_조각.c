#include <stdio.h>

int x[5], i, p, t;
int _s() {
	int i;
	for (i = 0; i < 5; i++)
		if (x[i] != i + 1)
			return 1;
	return 0;
}

int main() {
	for (; i < 5; i++)
		scanf("%d", x + i);
	while (_s()) {
		if (x[p] > x[p + 1]) {
			t = x[p], x[p] = x[p + 1], x[p + 1] = t;
			for (i = 0; i < 5; i++)
				printf("%d ", x[i]);
			printf("\n");
		}
		p = (p + 1) % 4;
	}
	return 0;
}