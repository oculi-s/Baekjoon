#include <stdio.h>

int _c(char a, int c){
	int r;
	if (c == 1)
		r = a>='a' && a<='z';
	else if (c == 2)
		r = a>='A' && a<='Z';
	else if (c == 3)
		r = a == '_';
	return r;
}

int i, t;
char s[103];
int main(){
	scanf("%s", s);
	if (!(_c(s[0], 1))){
		printf("Error!");
	} else{
		for (i=0; s[i]; i++){
			if (_c(s[i], 3))
				t = 1;
			if (!(_c(s[i], 1) || _c(s[i], 2) || _c(s[i], 3)))
				break;
			else if (s[i] == '_' && s[i+1] == '_')
				break;
		}
		if (t && !s[i])
			for (i=0; s[i]; i++)
				if (_c(s[i], 2))
					break;
		if (s[i])
			printf("Error!");
		else if (s[i-1] == '_')
			printf("Error!");
		else{
			for (i=0; s[i]; i++){
				if (s[i]>='a' && s[i]<='z')
					printf("%c", s[i]);
				else if (s[i] == '_')
					s[i+1] -= 32;
				else if (s[i]>='A' && s[i]<='Z'){
					if (s[i-1] == '_')
						printf("%c", s[i]);
					else
						printf("_%c", s[i]+32);
				}
			}
		}
	}
	return 0;
}
