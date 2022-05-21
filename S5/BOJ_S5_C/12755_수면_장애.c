#include <stdio.h>
#include <math.h>

int n, s, i, l, t[12];
int main() {
	scanf("%d", &n), l = 1;
	for (i = 1; i < 10; i++)
		if (n > i * 9 * pow(10, i - 1))
			n -= i * 9 * pow(10, i - 1), s = pow(10, i), l = i + 1;
	if (n % l)
		s += n / l, n %= l;
	else
		s += (n - (l - 1)) / l, n = l;
	i = 1;
	while (s)
		t[l - i + 1] = s % 10, s /= 10, i++;
	printf("%d", t[n]);
	return 0;
}
