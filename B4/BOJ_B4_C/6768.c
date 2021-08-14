#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	scanf("%d", &n);
	int a[4] = { 1,0,0,0 };
	while (n-- >= 4) {
		a[1] += a[0], a[2] += a[1], a[3] += a[2];
	}
	printf("%d", a[3]);
	return 0;
}