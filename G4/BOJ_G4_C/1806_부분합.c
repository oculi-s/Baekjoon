#include <stdio.h>
#define N 100000

short x[N];
int main() {
	int n, s, i, a, f = 0, e = 1, t;
	scanf("%d %d", &n, &s);
	for (i = 0; i < n; i++)
		scanf("%hd", x + i);
	t = x[0], a = n + 1;
	while (f < n) {
		if ((t < s && e < n) || e <= f)
			t += x[e], e++;
		else if (t >= s)
			a = a < (e - f) ? a : (e - f), t -= x[f], f++;
		else
			t -= x[f], f++;
	}
	printf("%d", a == n + 1 ? 0 : a);
	return 0;
}