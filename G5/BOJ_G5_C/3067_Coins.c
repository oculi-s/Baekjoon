#include <stdio.h>

int t, n, m, i, j, k, a[20], b[20][10001], v;
int main(){
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		for (i=1; i<=10000; i++)
			for (j=0; j<20; j++)
				b[j][i] = 0;
		for (i=0; i<n; i++)
			scanf("%d", a+i), b[i][a[i]] = 1;
		scanf("%d", &m);
		for (i=a[0]; i<=m; i++)
			for (j=0; j<n; j++)
				if (i-a[j]>0){
					for (k=0; k<=j; k++)
						b[j][i] += b[k][i-a[j]];
				} else {
					break;
				}
		v = 0;
		for (i=0; i<n; i++)
			v += b[i][m];
		printf("%d\n", v);
	}
	return 0;
}
