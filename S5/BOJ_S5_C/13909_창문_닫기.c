#include <stdio.h>

int n, i;
int main() {
	scanf("%d", &n);
	for (i = 1; ; i++)
		if (i * i > n) {
			printf("%d", i - 1);
			return 0;
		}
}
