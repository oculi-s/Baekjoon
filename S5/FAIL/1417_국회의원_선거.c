#include <stdio.h>
#include <stdbool.h>

int main() {
	int n, i, v[1000], s, c = 1, a = 0;
	bool p[1000];
	scanf("%d", &n);
	for(i=0; i<n; i++)
		scanf("%d", v + i);
	for (i = 0; i < n; i++)
		p[i] = v[0] < v[i];
	for (i = 0, s = v[0]; i < n; i++)
		if (p[i])
			s += v[i], c++;
	for (i = 0; i < n; i++)
		if (p[i])
			a += v[i] - (s / c);
	if (c == 1)
		a = 1;
	printf("%d", a);
	return 0;
}