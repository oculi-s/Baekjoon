#include <stdio.h>

int n, c;
int main() {
	scanf("%d", &n);
	if (n % 2)
		c = 0;
	else {
		if (n % 4)
			c = 1;
		else
			c = 2;
	}
	printf("%d", c);
	return 0;
}