#include <stdio.h>

int i, n;
char s[15];
int main(){
	scanf("%s", s);
	if (s[1] == 'x'){
		for (i = 2; s[i]; i++)
			n += s[i] - (s[i]<'a'?'0':'a'-10), n *= 16;
		printf("%d", n / 16);
	} else if (s[0] == '0'){
		for (i = 0; s[i]; i++)
			n += s[i] - '0', n *= 8;
		printf("%d", n / 8);
	} else {
		printf("%s", s);
	}
	return 0;
}
