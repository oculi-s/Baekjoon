#include <stdio.h>

unsigned long long n, t = 1;

int main(){
	scanf("%llu", &n);
	while(t < n)
		t *= 2;
	printf("%d", t == n);
	return 0;
}
