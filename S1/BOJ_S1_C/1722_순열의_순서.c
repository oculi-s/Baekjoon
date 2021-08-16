#include <stdio.h>
#include <stdlib.h>

unsigned long long f(int n) {
	unsigned long long s = 1;
	while (n) { s *= n--; };
	return s;
}

int pop(int* s, int i, int n) {
	int t = s[i];
	for (int j = i; j < n - 1; j++)
		s[j] = s[j + 1];
	return t;
}

int insort(int* s, int a, int r) {
	if (r > 0) {
		int l = 0, m, t = r;
		while (l < r) {
			m = (l + r) / 2;
			if (s[m] < a)
				l = m + 1;
			else
				r = m;
		}
		for (int i = t; i > r; i--)
			s[i] = s[i - 1];
		s[r] = a;
		return r;
	}
	else {
		s[1] = s[0];
		s[0] = a;
		return 0;
	}
}

int main() {
	int n, k, i, s[20];
	scanf("%d", &n);
	scanf("%d", &k);
	if (k == 1) {
		for (i = 0; i < n; i++)
			s[i] = i + 1;
		int t = n - 1;
		unsigned long long a = f(n - 1), m;
		scanf("%lld", &m);
		m--;
		for (i = 0; i < n; i++) {
			printf("%d ", pop(s, m / a, n));
			m %= a, a /= t != 0 ? t-- : 1;
		}
	}
	else {
		int t[20], l = 0, j;
		unsigned long long a = 1, b = 1;
		for (i = 0; i < n; i++)
			scanf("%d", s + i);
		for (i = n - 1; i >= 0; i--) {
			j = insort(t, s[i], l++);
			a += (long long )(j * b);
			b *= (n - i);
		}
		printf("%lld", a);
	}
	return 0;
}