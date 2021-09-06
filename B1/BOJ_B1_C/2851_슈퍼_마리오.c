#include <stdio.h>
#include <stdlib.h>

int m, i, x[10];
int main() {
	for (; i < 10; i++)
		scanf("%d", x + i);
	for (i = 1; i < 10; i++)
		x[i] += x[i - 1];
	for (i = 0; i < 10; i++)
		if (abs(x[i] - 100) < abs(m - 100))
			m = x[i];
		else if (abs(x[i] - 100) == abs(m - 100))
			m = x[i] > m ? x[i] : m;
	printf("%d", m);
	return 0;
}