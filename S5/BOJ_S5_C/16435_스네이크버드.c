#include <stdio.h>

int n, l, c[10000], t;
int main(){
	scanf("%d %d", &n, &l);
	while(n--)
		scanf("%d", &t), c[t]++;
	t = l;
	while(t){
		if (c[t]){
			c[t]--, l++, t = l;
		} else{
			t--;
		}
	}
	printf("%d", l);
	return 0;
}
