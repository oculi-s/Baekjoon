#include <stdio.h>
int min(int a,int b) {return a<b?a:b;}
int max(int a,int b) {return a>b?a:b;}

int a, b, c, d, s;
int main(){
	scanf("%d %d %d %d", &a, &b, &c, &d);
	s = max(min(a, b) * min(c, d), s);
	s = max(min(a, c) * min(b, d), s);
	s = max(min(a, d) * min(b, c), s);
	printf("%d", s);
	return 0;
}
