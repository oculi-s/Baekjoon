#include <stdio.h>

int n, i, d[100000], g, s;

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
	scanf("%d\n%d\n%d", &n, d, d+1);
	g = d[1]-d[0];
	for (i = 2; i<n; i++)
		scanf("%d", d+i), g = gcd(g, d[i]-d[i-1]);
	for (i = 1; i<n; i++)
		s += (d[i]-d[i-1])/g-1;
	printf("%d", s);
	return 0;
}
