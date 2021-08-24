#include <stdio.h>

int c[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
char d[7][4] = { "SUN", "MON", "TUE","WED","THU","FRI","SAT" };
int main() {
	int a, b, i;
	scanf("%d %d", &a, &b);
	for (i = 1; i < a; i++)
		b += c[i];
	printf("%s", d[b % 7]);
	return 0;
}