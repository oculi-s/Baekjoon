#include <stdio.h>

int t, n, i, a[6], b[6], c, d;
int main(){
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		d = 1, c = 0;
		for (i=0; i<6; i++)
			scanf("%d", a+i), c += a[i];
		while(c<=n){
			for (i=0; i<6; i++)
				b[i] = a[(i+1)%6]+a[(i+3)%6]+a[(i+5)%6];
			for (i=0; i<6; i++)
				a[i] += b[i], c += b[i];
			d++;
		}
		printf("%d\n", d);
	}
	return 0;
}
