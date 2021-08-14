#include <stdio.h>
#include <stdbool.h>
#define M 100001

bool P[M] = { 0 };
int main() {
	int a, b, c, n, i, j, v = 0;
	scanf("%d %d", &a, &b);
	P[0] = 1, P[1] = 1;
	for (i = 2; i <= b; i++)
		if (!P[i])
			for (j = i * 2; j <= b; j += i)
				P[j] = 1;
	for (; a <= b; a++) {
		c = 0, n = a;
		for (i = 2; i <= n && n > 1; i++)
			if (!P[i])
				while (!(n % i))
					c++, n /= i;
		v += !P[c];
	}
	printf("%d", v);
	return 0;
}