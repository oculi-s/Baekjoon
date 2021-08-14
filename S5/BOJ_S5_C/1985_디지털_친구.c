#include <stdio.h>
#include <stdbool.h>

bool _almost(char* a, char* b, int p[10], int q[10], int i, int d) {
	int j, s = a[i], e = a[i + 1];
	p[s]--, p[e]--, p[s - d]++, p[e + d]++;
	for (j = 0; j < 10; j++)
		if ((p[j] == 0) != (q[j] == 0))
			break;
	if (j == 10) {
		printf("almost friends\n");
		return 1;
	}
	p[s]++, p[e]++, p[s - d]--, p[e + d]--;
	return 0;
}

int main() {
	int _ = 3, i, m, n, p[10], q[10];
	char a[110], b[110];
	while (_--) {
		scanf("%s %s", a, b);
		for (i = 0; i < 10; i++)
			p[i] = 0, q[i] = 0;
		m = 0, n = 0;
		while (a[m])
			a[m] -= 48, p[a[m]]++, m++;
		while (b[n])
			b[n] -= 48, q[b[n]]++, n++;
		for (i = 0; i < 10; i++)
			if ((p[i] == 0) != (q[i] == 0))
				break;
		if (i == 10)
			printf("friends\n");
		else if (m == 1 && n == 1)
			printf("%s\n", a[0] == b[0] ? "friends" : "nothing");
		else {
			for (i = 0; i < m - 1; i++) {
				if (a[i] > (i == 0) && a[i + 1] != 9)
					if (_almost(a, b, p, q, i, 1))
						break;
				if (a[i + 1] && a[i] != 9)
					if (_almost(a, b, p, q, i, -1))
						break;
			}
			if (i == m - 1) {
				for (i = 0; i < n - 1; i++) {
					if (b[i] > (i == 0) && b[i + 1] != 9)
						if (_almost(b, a, q, p, i, 1))
							break;
					if (b[i + 1] && b[i] != 9)
						if (_almost(b, a, q, p, i, -1))
							break;
				}
			}
			if (i == n - 1)
				printf("nothing\n");
		}
	}
	return 0;
}