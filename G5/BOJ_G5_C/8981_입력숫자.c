#include <stdio.h>

int n, i, a[30], b[30], t;
int main(){
	scanf("%d", &n);
	for (i=0; i<n; i++)
		scanf("%d", a+i);
	for (i=0; i<n; i++){
		while(b[t])
			t++, t %= n;
		b[t] = a[i];
		t = (t+a[i])%n;
	}
	printf("%d\n", n);
	for (i=0; i<n; i++)
		printf("%d ", b[i]);
	return 0;
}
