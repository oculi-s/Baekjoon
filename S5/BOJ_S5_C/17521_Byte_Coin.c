#include <stdio.h>

typedef long long Int;
Int n, w, i, p[16], c;
int main(){
	scanf("%lld %lld", &n, &w);
	for (i=0; i<n; i++)
		scanf("%lld", p+i);
	i = 0;
	while(i<n-1){
		while (p[i+1]<=p[i] && i<n-1)
			i++;
		c = w/p[i], w %= p[i];
		while (p[i+1]>=p[i] && i<n-1)
			i++;
		w += p[i]*c;
	}
	printf("%lld", w);
	return 0;
}
