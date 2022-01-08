#include <stdio.h>

int i;
char s[5003];

int main(){
	scanf("%s", s);
	for (i=0; s[i]; i++){
		if (s[i]=='p'&&s[i+1]=='i')
			i++;
		else if (s[i]=='k'&&s[i+1]=='a')
			i++;
		else if (s[i]=='c'&&s[i+1]=='h'&&s[i+2]=='u')
			i+=2;
		else
			break;
	}
	printf("%s", s[i]?"NO":"YES");
	return 0;
}
