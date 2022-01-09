#include <stdio.h>

int _c(int a){
	int i, d[10] = {0,};
	while(a && !d[a%10])
		d[a%10]++, a/=10;
	return !a;
}

int a, b, c, d[10];
int main(){
	while(scanf("%d %d", &a, &b) != EOF){
		c = 0;
		for (; a<=b; a++)
			if (_c(a))
				c++;
		printf("%d\n", c);
	}
	return 0;
}
