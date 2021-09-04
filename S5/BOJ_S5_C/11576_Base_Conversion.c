#include <stdio.h>
#include <math.h>

unsigned int a, b, c, n, t, x[100], e;
int main() {
	scanf("%d %d\n%d", &a, &b, &c);
	while (c--)
		scanf("%d", &t), n += t * pow(a, c);
	while (n)
		x[e] = n % b, n /= b, e++;
	while (e--)
		printf("%d ", x[e]);
	return 0;
}