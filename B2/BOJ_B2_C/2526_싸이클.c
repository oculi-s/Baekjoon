#include <stdio.h>

int n, p, t, c[100], i;
int main(){
	scanf("%d %d", &n, &p);
	t = n;
	while(1){
		t = (t*n)%p;
		if(c[t])
			break;
		else
			c[t] = i;
		i++;
	}
	printf("%d", i-c[t]);
	return 0;
}
