#include <stdio.h>
#include <stdlib.h>

int main() {
	int t, m = 0, j = 0;
	for (int i = 1; i < 10; i++) {
		scanf("%d", &t);
		j = t > m ? i : j;
		m = t > m ? t : m;
	}
	printf("%d\n%d", m, j);
	return 0;
}