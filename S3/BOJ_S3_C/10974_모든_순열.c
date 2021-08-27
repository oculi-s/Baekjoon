#include <stdio.h>
int n, x[8];

int _same() {
	int i, j;
	for (i = 0; i < n; i++)
		for (j = i + 1; j < n; j++)
			if (x[i] == x[j])
				return 1;
	return 0;
}
void _rise() {
	int i;
	x[n - 1]++;
	for (i = n - 1; i; i--) {
		if (x[i] == n)
			x[i - 1]++, x[i] -= n;
	}
}

int main() {
	int i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		x[i] = i;
	while (1) {
		while (_same())
			_rise();
		if (x[0] == n)
			break;
		for (i = 0; i < n; i++)
			printf("%d ", x[i] + 1);
		printf("\n");
		_rise();
	}
	return 0;
}