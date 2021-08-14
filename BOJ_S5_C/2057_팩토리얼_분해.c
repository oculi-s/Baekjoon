#include <stdio.h>
#include <stdbool.h>

bool _check(int s, long long n, long long a[20]) {
	int i;
	for (i = s; i < 20; i++)
		if (n == a[i])
			return 1;
	for (i = s; i < 20; i++)
		if (_check(i + 1, n - a[i], a))
			return 1;
	return 0;
}

int main() {
	long long n, a[20], i, j, s = 2, t;
	scanf("%lld", &n);
	a[0] = 1, a[1] = 1;
	for (i = 2; i < 20; i++)
		a[i] = a[i - 1] * i, s += a[i];

	if (n > s)
		printf("NO");
	else
		printf("%s", _check(0, n, a) ? "YES" : "NO");
	return 0;
}