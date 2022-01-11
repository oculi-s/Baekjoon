#include <stdio.h>

int n, i, j, a[100], b, m, t;
char c;

int _gcd(int a, int b){
	int c = a<b?a:b;
	b = a>b?a:b;
	a = c;
	while(a)
		c = a, a = b%a, b = c;
	return b;
}

int main(){
	scanf("%d\n", &t);
	while(t--){
		i = 0, c = 0;
		while(c != '\n'){
			if (scanf("%c", &c) == EOF)
				break;
			if (c >= '0' && c<='9')
				a[i] += c - '0', a[i] *= 10;
			else if (c == ' ')
				a[i]/=10, i++;
		}
		a[i] /= 10, n = i, m = 0;
		for (i=0; i<=n; i++)
			for (j=i+1; j<=n; j++)
				b = _gcd(a[i], a[j]), m = m>b?m:b;
		for (i=0; i<=n; i++)
			a[i] = 0;
		printf("%d\n", m);
	}
	return 0;
}
