#include <stdio.h>

int x[21], i, a, b;
void rev(int a, int b) {
	int i, t;
	while (a < b)
		t = x[a], x[a] = x[b], x[b] = t, a++, b--;
}

int main() {
	for (; i <= 20; i++)
		x[i] = i;
	for (i = 0; i < 10; i++)
		scanf("%d %d", &a, &b), rev(a, b);
	for (i = 1; i <= 20; i++)
		printf("%d ", x[i]);
	return 0;
}