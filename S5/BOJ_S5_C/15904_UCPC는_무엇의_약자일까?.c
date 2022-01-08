#include <stdio.h>
#include <string.h>

int i, e;
char s[1010];
int main(){
	gets(s);
	for (i=0; s[i]; i++)
		if (e==0 && s[i]=='U')
			e++;
		else if (e==1 && s[i]=='C')
			e++;
		else if (e==2 && s[i]=='P')
			e++;
		else if (e==3 && s[i]=='C')
			e++;
	printf("I %s UCPC", e==4?"love":"hate");
	return 0;
}
