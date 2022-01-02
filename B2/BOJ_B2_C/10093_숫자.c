#include <stdio.h>

unsigned long long a, b, c;
int main(){
	scanf("%llu %llu", &a, &b);
	c = a<b?a:b;
	b = a>b?a:b;
	a = c;
	printf("%llu\n", b-a-(a!=b));
	while(++a<b)
		printf("%llu ", a);
	return 0;
}
