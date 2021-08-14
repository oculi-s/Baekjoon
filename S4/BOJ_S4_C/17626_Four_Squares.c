#include <stdio.h>
#include <math.h>

int main() {
	int a, b, i, j, k, l;
	scanf("%d", &a);
	b = sqrt(a);
	for (i = b; i; i--)
		if (i * i == a) {
			printf("1");
			return 0;
		}
	for (i = b; i; i--)
		for (j = i; j; j--)
			if (i * i + j * j == a) {
				printf("2");
				return 0;
			}
	for (i = b; i; i--)
		for (j = i; j; j--)
			for (k = j; k; k--)
				if (i * i + j * j + k * k == a) {
					printf("3");
					return 0;
				}
    printf("4");
	return 0;
}