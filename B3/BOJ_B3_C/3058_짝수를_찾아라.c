#include <stdio.h>

int n, t, s, m, i;
int main() {
	scanf("%d", &n);
	while (n--) {
		s = 0, m = 100;
		for (i = 0; i < 7; i++) {
			scanf("%d", &t);
			if (t % 2 == 0)
				m = m < t ? m : t, s += t;
		}
		printf("%d %d\n", s, m);
	}
	return 0;
}