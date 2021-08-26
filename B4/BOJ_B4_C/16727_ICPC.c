#include <stdio.h>

int a, b, c, d;
int main() {
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if (a + d == b + c)
		printf("%s", a == c ? "Penalty" : d > b ? "Persepolis" : "Esteghlal");
	else
		printf("%s", a + d > b + c ? "Persepolis" : "Esteghlal");
	return 0;
}