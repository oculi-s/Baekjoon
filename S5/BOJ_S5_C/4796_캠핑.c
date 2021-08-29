#include <stdio.h>

int a, b, c, i;
int main() {
	scanf("%d %d %d", &a, &b, &c);
	while (a + b + c) {
		i++;
		printf("Case %d: %d\n", i, (c / b) * a + (c % b < a ? c % b : a));
		scanf("%d %d %d", &a, &b, &c);
	}
	return 0;
}