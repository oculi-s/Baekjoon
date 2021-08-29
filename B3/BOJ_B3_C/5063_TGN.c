#include <stdio.h>

int n, a, b, c, i;
int main() {
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d %d %d", &a, &b, &c), printf("%s\n", a == b - c ? "does not matter" : a < b - c ? "advertise" : "do not advertise");
	return 0;
}