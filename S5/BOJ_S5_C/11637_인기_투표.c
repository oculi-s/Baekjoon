#include <stdio.h>

int t, n, i, m, a[11], c, s;
int main(){
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		m = 0, c = 0, s = 0;
		for (i=1; i<=n; i++)
			scanf("%d", a+i), m = a[m]>a[i]?m:i, s += a[i];
		for (i=1; i<=n; i++)
			if (i!=m && a[i]==a[m])
				c = 1;
		if (c)
			printf("no winner\n");
		else
			printf("%sity winner %d\n", a[m]*2>s?"major":"minor", m);
	}
	return 0;
}
