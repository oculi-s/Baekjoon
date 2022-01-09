#include <stdio.h>

typedef long long Int;
typedef struct{
	Int v, c;
} node;

node n[1000000];
Int a, b, c, s, e;
int main(){
	scanf("%lld %lld", &a, &b);
	n[s].v = a, n[s].c = 1, e = 1;
	while(s<e){
		c = n[s].c, a = n[s++].v;
		if (a==b)
			break;
		if (a*2<=b)
			n[e].v = a*2, n[e].c = c+1, e++;
		if (a*10+1<=b)
			n[e].v = a*10+1, n[e].c = c+1, e++;
	}
	printf("%lld", a==b?c:-1);
	return 0;
}
