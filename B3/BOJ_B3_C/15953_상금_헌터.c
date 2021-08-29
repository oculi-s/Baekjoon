#include <stdio.h>

int a, n, s;
int main() {
	scanf("%d", &n);
	while(n--) {
		s = 0;
		scanf("%d", &a);
		if (a == 0)
			s += 0;
		else if (a <= 1)
			s += 5000000;
		else if (a <= 3)
			s += 3000000;
		else if (a <= 6)
			s += 2000000;
		else if (a <= 10)
			s += 500000;
		else if (a <= 15)
			s += 300000;
		else if (a <= 21)
			s += 100000;
		
		scanf("%d", &a);
		if (a == 0)
			s += 0;
		else if (a <= 1)
			s += 5120000;
		else if (a <= 3)
			s += 2560000;
		else if (a <= 7)
			s += 1280000;
		else if (a <= 15)
			s += 640000;
		else if (a <= 31)
			s += 320000;
		printf("%d\n", s);
	}
	return 0;
}