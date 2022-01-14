#include <stdio.h>
#define M 1299709

int p[M + 1], t, n, i, j, s, e;
int main() {
	p[1] = 1;
	for (i = 2; i <= M; i++)
		if (!p[i])
			for (j = i * 2; j <= M; j += i)
				p[j] = 1;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		if (!p[n])
			printf("0\n");
		else {
			s = n, e = n;
			while (p[s])
				s--;
			while (p[e])
				e++;
			printf("%d\n", e - s);
		}
	}
	return 0;
}
