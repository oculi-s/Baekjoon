#include <stdio.h>

int n, i, s, t;

int main() {
	scanf("%d", &n);
	while (n + 1) {
		s = 0, t = 0;
		for (i = 1; i < n; i++)
			if (n % i == 0)
				s += i;
		if (s == n) {
			printf("%d = ", n);
			for (i = 1; i < n; i++)
				if (n % i == 0)
					if (s - t == i)
						printf("%d", i);
					else
						t += i, printf("%d + ", i);
			printf("\n");
		}
		else
			printf("%d is NOT perfect.\n", n);
		scanf("%d", &n);
	}
	return 0;
}