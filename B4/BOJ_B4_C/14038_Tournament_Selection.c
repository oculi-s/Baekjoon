#include <stdio.h>

int main() {
	int i = 6, c = 0;
	char t[2];
	while (i--)
		scanf("%s", &t), c += t[0] == 'W';
	printf("%d", c == 0 ? -1 : c < 3 ? 3 : c < 5 ? 2 : 1);
}