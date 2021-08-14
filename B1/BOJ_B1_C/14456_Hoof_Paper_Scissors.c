#include <stdio.h>

int main() {
	int n, a, b, c = 0, d = 0;
	scanf("%d", &n);
	while (n--) {
		scanf("%d %d", &a, &b);
		if (a != b)
			if ((a + 1) % 3 == b % 3)
				c++;
			else
				d++;
	}
	printf("%d", c > d ? c : d);
	return 0;
}