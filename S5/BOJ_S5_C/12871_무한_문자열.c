#include <stdio.h>
#include <string.h>

int lcm(int a, int b){
	int c, m = a*b;
	c = a<b?a:b;
	b = a>b?a:b;
	a = c;
	while(a)
		c = a, a = b%a, b = c;
	return m/b;
}

int n, m, l, i, j;
char s[3000], t[3000];

int main(){
	scanf("%s\n%s", s, t);
	n = strlen(s), m = strlen(t), l = lcm(n, m);
	for (i=n; i<l; i+=n)
		for (j=0; j<n; j++)
			s[i+j] = s[j];
	s[i] = 0;
	for (i=m; i<l; i+=m)
		for (j=0; j<m; j++)
			t[i+j] = t[j];
	t[i] = 0;
	printf("%d", !strcmp(s, t));
	return 0;
}
