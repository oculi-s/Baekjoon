#include <stdio.h>
#include <string.h>

int i, j;
char a[6], b[6];
int main() {
	for (i = 0; i < 6; i++)
		a[i] = '0', b[i] = '0';
	scanf("%s %s", a, b);
	a[strlen(a)] = '0', b[strlen(b)] = '0';
	for (i = 0; i < 4; i++)
		a[i] += b[i] - 96, a[i + 1] += a[i] > 9, a[i] %= 10, a[i] += 48;
	i = 0;
	while (a[i] == '0')
		i++;
	for (j = 5; a[j] == '0'; j--)
		a[j] = 0;
	printf("%s", a + i);
	return 0;
}