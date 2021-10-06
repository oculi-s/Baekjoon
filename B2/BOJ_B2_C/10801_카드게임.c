#include <stdio.h>

int a[11], b[11], i;
int main() {
	for (; i < 10; i++)
		scanf("%d", a + i);
	for (i = 0; i < 10; i++)
		scanf("%d", b + i);
	for (i = 0; i < 10; i++)
		if (a[i] > b[i])
			a[10]++;
		else if (a[i] < b[i])
			b[10]++;
	printf("%c", a[10] == b[10] ? 'D' : a[10] > b[10] ? 'A' : 'B');
	return 0;
}