#include <stdio.h>

int a[2], n, i, t;
int main() {
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &t), a[t]++;
	printf("%s", a[0] > a[1] ? "Junhee is not cute!" : "Junhee is cute!");
	return 0;
}