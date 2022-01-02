#include <stdio.h>

int a, b, c;
int main(){
	scanf("%d %d %d", &a, &b, &c);
	b += a, a = 0;
	while(b >= c)
		a += b / c, b = b / c + b % c;
	printf("%d", a);
	return 0;
}
