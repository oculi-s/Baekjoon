#include <stdio.h>

int t, n, s, e, i, a, b, d;
short x[100001];
char f[100001], z[3];
int main() {
	scanf("%d", &t);
	while (t--) {
		scanf("%s\n%d\n", f, &n);
		if (n > 1) {
			scanf("[%hd,", x);
			for (i = 1; i < n - 1; i++)
				scanf("%hd,", x + i);
			scanf("%hd]\n", x + n - 1);
		}
		else if (n == 1)
			scanf("[%hd]\n", x);
		else if (n == 0)
			scanf("%s", z);
		a = 0, s = 0, e = n, d = 1;
		while (f[a] && s <= e) {
			if (f[a] == 'R')
				d = 1 - d;
			else if (d)
				s++;
			else
				e--;
			a++;
		}
		if (s <= e) {
			printf("[");
			if (s == e)
				printf("]\n");
			else if (d) {
				for (i = s; i < e - 1; i++)
					printf("%hd,", x[i]);
				printf("%hd]\n", x[e - 1]);
			}
			else {
				for (i = e - 1; i > s; i--)
					printf("%hd,", x[i]);
				printf("%hd]\n", x[s]);
			}
		}
		else
			printf("error\n");
	}
	return 0;
}