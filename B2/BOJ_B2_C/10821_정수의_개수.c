#include <stdio.h>

int n, t;
int main() {
	while (t != '\n')
		scanf("%c", &t), n += t == ',';
	printf("%d", n + 1);
	return 0;
}