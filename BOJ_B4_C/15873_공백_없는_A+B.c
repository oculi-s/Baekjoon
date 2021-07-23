#include <stdio.h>

int main() {
	char a[5];
	scanf("%s", a);
	if (a[1] == '0' && a[3] == '0')
		printf("%d", 20);
	else if (a[1] == '0')
		printf("%d", a[2] - 38);
	else if (a[2] == '0')
		printf("%d", a[0] - 38);
	else
		printf("%d", a[0] + a[1] - 48 * 2);
}