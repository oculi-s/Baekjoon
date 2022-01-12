#include <stdio.h>

typedef struct{
	int t, p;
} node;

node s[1500001];
int n, i, j, a[1500001], m;
int main(){
	scanf("%d", &n);
	for (i=1; i<=n; i++)
		scanf("%d %d", &(s[i].t), &(s[i].p));
	for (i=1; i<=n; i++)
		for (j=0; j<50; j++)
			if (i-j >= 1)
				if (s[i-j].t == j+1){
					if (a[i-j-1] + s[i-j].p > a[i])
						a[i] = a[i-j-1] + s[i-j].p;
				} else {
					if (a[i-j-1] > a[i])
						a[i] = a[i-j-1];
				}
	printf("%d", a[n]);
	return 0;
}
