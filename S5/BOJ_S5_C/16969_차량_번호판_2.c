#include <stdio.h>

long long i, v;
char s[1000001];
int main(){
	scanf("%s", s);
	v = s[0] == 'c'?26:10;
	for (i=1; s[i]; i++){
		if (s[i] == 'c' && s[i-1] == 'c')
			v *= 25;
		else if (s[i] == 'c')
			v *= 26;
		else if (s[i-1] == 'd')
			v *= 9;
		else
			v *= 10;
		v %= 1000000009;
	}
	printf("%lld", v);
	return 0;
}
