#include <stdio.h>

int x[31], i, t;
int main() {
	for (i = 0; i < 28; i++)
		scanf("%d", &t), x[t] = 1;
	for (i = 1; i <= 30; i++)
		if (!x[i])
			printf("%d\n", i);
	return 0;
}