#include <stdio.h>

int s, t, a, i;
int main() {
	scanf("%d", &s);
	for (i = 0; i < 9; i++)
		scanf("%d", &t), a += t;
	printf("%d", s - a);
	return 0;
}