#include <stdio.h>

int n, a, b;

int gcd(int a, int b){
	int c;
	if (b>a){
		while(a)
			c = a, a = b % a, b = c;
		return b;		
	} else {
		while(b)
			c = b, b = a % b, a = c;
		return a;
	}
}

int main(){
	scanf("%d", &n);
	while(n--)
		scanf("%d %d", &a, &b), printf("%d %d\n", a*b/gcd(a,b), gcd(a,b));
	return 0;
}
