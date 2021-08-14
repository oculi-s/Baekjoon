#include <stdio.h>

int main() {
	int a, b, c;
	scanf("%d/%d/%d", &a, &b, &c);
	printf("%s", (a + c < b || b == 0) ? "hasu" : "gosu");
	return 0;
}