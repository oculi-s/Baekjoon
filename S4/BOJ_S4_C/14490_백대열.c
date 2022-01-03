#include <stdio.h>

int a, b;

int gcd(int a, int b){
	int c;
	if (b>a){
		while(a)
			c=a, a=b%a, b=c;
		return b;
	} else {
		while(b)
			c=b, b=a%b, a=c;
		return a;
	}
}

int main(){
	scanf("%d:%d", &a, &b);
	printf("%d:%d", a/gcd(a,b), b/gcd(a,b));
	return 0;
}
