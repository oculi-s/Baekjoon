#include <stdio.h>

int _max(int a, int b) {
	return a > b ? a : b;
}

int a[100002][2], b[100002][2];
int main() {
	int n, t, i;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		for (i = 2; i < n + 2; i++)
			scanf("%d", &(a[i][0]));
		for (i = 2; i < n + 2; i++)
			scanf("%d", &(a[i][1]));
		for (i = 2; i < n + 2; i++) {
			b[i][0] = _max(b[i - 1][1], b[i - 2][1]) + a[i][0];
			b[i][1] = _max(b[i - 1][0], b[i - 2][0]) + a[i][1];
		}
		printf("%d\n", _max(b[n + 1][0], b[n + 1][1]));
	}
	return 0;
}