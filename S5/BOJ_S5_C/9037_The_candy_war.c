#include <stdio.h>

int t, n, i, a[11], b;
int main(){
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		for (i=0; i<n; i++)
			scanf("%d", a+i), a[i] += a[i]%2;
		b = 0;
		for (i=0; i<n-1; i++)
			if (a[i]!=a[i+1])
				break;
		while(i != n-1){
			a[n-1] /= 2, a[10] = a[n-1];
			for (i=n-1; i; i--)
				a[i-1] /= 2, a[i] += a[i-1];
			a[0] += a[10];
			for (i=0; i<n; i++)
				a[i] += a[i]%2;
			b++;
			for (i=0; i<n-1; i++)
				if (a[i]!=a[i+1])
					break;
		}
		printf("%d\n", b);
	}
	return 0;
}
