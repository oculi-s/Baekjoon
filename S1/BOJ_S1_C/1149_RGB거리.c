#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, a[3], b[3] = { 0,0,0 };
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d %d", a, a + 1, a + 2);
		a[0] += b[1] < b[2] ? b[1] : b[2];
		a[1] += b[0] < b[2] ? b[0] : b[2];
		a[2] += b[0] < b[1] ? b[0] : b[1];
		b[0] = a[0], b[1] = a[1], b[2] = a[2];
	}
	printf("%d", b[0] < b[1] && b[0] < b[2] ? b[0] : b[1] < b[2] ? b[1] : b[2]);
	return 0;
}