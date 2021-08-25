#include <stdio.h>
#include <math.h>

char t[10];
int main() {
	long long i, a[3];
	for (i = 0; i < 3; i++) {
		scanf("%s", t);
		if (t[0] == 'w')
			a[i] = 9;
		else if (t[0] == 'v')
			a[i] = 7;
		else if (t[0] == 'y')
			a[i] = 4;
		else if (t[0] == 'o')
			a[i] = 3;
		else if (t[0] == 'r')
			a[i] = 2;
		else if (t[0] == 'g' && t[3] == 'y')
			a[i] = 8;
		else if (t[0] == 'g' && t[3] == 'e')
			a[i] = 5;
		else if (t[2] == 'u')
			a[i] = 6;
		else if (t[2] == 'o')
			a[i] = 1;
		else
			a[i] = 0;
	}
	printf("%lld", (a[0] * 10 + a[1]) * (long long)pow(10, a[2]));
	return 0;
}