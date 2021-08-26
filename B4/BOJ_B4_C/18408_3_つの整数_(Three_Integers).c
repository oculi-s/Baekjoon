#include <stdio.h>

int d[3], a, i;
int main() {
	for (; i < 3; i++)
		scanf("%d", &a), d[a]++;
	printf("%d", d[1] > d[2] ? 1 : 2);
	return 0;
}