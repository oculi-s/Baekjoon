#include <stdio.h>
#include <stdlib.h>

char a[10], b[10];
int i;
int main() {
	scanf("%s %s", a, b);
	for (i = 0; i < 10; i++)
		if (a[i] == '6')
			a[i] = '5';
	for (i = 0; i < 10; i++)
		if (b[i] == '6')
			b[i] = '5';
	printf("%d ", atoi(a) + atoi(b));
	for (i = 0; i < 10; i++)
		if (a[i] == '5')
			a[i] = '6';
	for (i = 0; i < 10; i++)
		if (b[i] == '5')
			b[i] = '6';
	printf("%d", atoi(a) + atoi(b));
	return 0;
}