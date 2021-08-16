#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, t, l = 0, a;
	scanf("%d", &n);
	if (n % 2 == 0 || n % 10 == 5)
		printf("%d", -1);
	else {
		a = 0, t = n * 10;
		while (t /= 10)
			l++, a = a * 10 + 1;
		if (a / 10 == n)
			l--;
		else
			while (a %= n)
				while (a < n)
					a = a * 10 + 1, l++;
		printf("%d", l);
	}
	return 0;
}