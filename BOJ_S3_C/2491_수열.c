#include <stdio.h>
#include <stdbool.h>

int p[100000];
int main() {
	int n, i, s = 0, e = 1, m = 1;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", p + i);
	bool d = p[s] < p[e];
	while (e < n) {
		m = m > e - s + 1 ? m : e - s + 1;
		if (d && (p[e] <= p[e + 1]) || !d && (p[e] >= p[e + 1]))
			e++;
		else if (e < n) {
			while (p[s] != p[e])
				s++;
			e++, d = !d;
		}
	}
	printf("%d", m);
	return 0;
}