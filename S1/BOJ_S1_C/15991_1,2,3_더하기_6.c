#include <stdio.h>
#define N 1000000009

typedef long long Int;
Int t, n, i, a[100001], b[100001];
int main(){
	b[1] = 1, b[2] = 2, b[3] = 4;
	a[1] = 1, a[2] = 2, a[3] = 2;
	for (n=4; n<=100000; n++)
		b[n] = (b[n-1]+b[n-2]+b[n-3])%N;
	for (n=4; n<=100000; n++){
		for (i=0; i<=3; i++)
			if (!((n-i)%2))
				a[n] += b[(n-i)/2];
		a[n] %= N;
	}
	scanf("%lld", &t);
	while(t--)
		scanf("%lld", &n), printf("%lld\n", a[n]);
	return 0;
}
