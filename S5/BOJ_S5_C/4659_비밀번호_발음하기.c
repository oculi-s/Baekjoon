#include <stdio.h>
#include <string.h>

int _c(char a){
	return a=='a'||a=='e'||a=='i'||a=='o'||a=='u';
}

int i, n, c;
char s[21];
int main(){
	scanf("%s", s);
	while(strcmp(s, "end")){
		n = strlen(s);
		for (i=0; i<n; i++)
			if (_c(s[i]))
				break;
		c = i == n;
		if (!c)
			for (i=0; i<n-2; i++)
				if (_c(s[i])==_c(s[i+1])&&_c(s[i])==_c(s[i+2])){
					c = 1;
					break;
				}
		if (!c)
			for (i=0; i<n-1; i++)
				if (s[i]!='e'&&s[i]!='o')
					if (s[i]==s[i+1]){
						c = 1;
						break;
					}
		printf("<%s> is %sacceptable.\n", s, c?"not ":"");
		scanf("%s", s);
	}
	return 0;
}
