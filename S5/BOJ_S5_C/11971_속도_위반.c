#include <stdio.h>

int i, s, n, m, a[101], b[101], c, d;
int main(){
	scanf("%d %d", &n, &m);
	s = 0;
	while(n--){
		scanf("%d %d", &c, &d);
		for (i=0; i<c; i++)
			a[s++] = d;
	}
	s = 0;
	while(m--){
		scanf("%d %d", &c, &d);
		for (i=0; i<c; i++)
			b[s++] = d;
	}
	m = 0;
	for (i=0; i<100; i++)
		if (b[i]-a[i]>m)
			m = b[i]-a[i];
	printf("%d", m);
	return 0;
}
