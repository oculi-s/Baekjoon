#include <stdio.h>

typedef long long Int;
Int n, x[100], y[100], a, b, i, r, m, c, d;
int main(){
	scanf("%lld", &n);
	for (i=0; i<n; i++)
		scanf("%lld %lld", x+i, y+i);
	m = 100*1000*1000;
	for (a=1; a<=100; a++)
		for (b=1; b<=100; b++){
			r = 0;
			for (i=0; i<n; i++)
				r += (y[i]-a*x[i]-b) * (y[i]-a*x[i]-b);
			if (r < m)
				m = r, c = a, d = b;
		}
	printf("%lld %lld", c, d);
	return 0;
}
