#include <stdio.h>

double _floor(double N, double L) {
	return (N / L) - (int)(N / L);
}

int main() {
	int N, L, i, j;
	scanf("%d %d", &N, &L);
	for (i = L + !(L % 2); i <= 100; i += 2)
		if (N % i == 0)
			break;
	for (j = L + (L % 2); j <= 100; j += 2)
		if (_floor(N, j) == 0.5)
			break;
	i = i < j ? i : j;
	if (i <= 100 && N / i - i / 2 + !(i % 2) >= 0) {
		for (j = N / i - i / 2 + !(i % 2); j <= N / i + i / 2; j++)
			printf("%d ", j);
	}
	else
		printf("-1");
	return 0;
}