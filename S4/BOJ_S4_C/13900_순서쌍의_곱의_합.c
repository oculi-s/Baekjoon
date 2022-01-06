#include <stdio.h>

long long n, i, c[100000], s;
int main(){
	scanf("%lld", &n);
	for (i=0; i<n; i++)
		scanf("%lld", c+i), s+=c[i], c[i] *= c[i];
	s *= s;
	for (i=0; i<n; i++)
		s -= c[i];
	printf("%lld", s/2);
	return 0;
}
