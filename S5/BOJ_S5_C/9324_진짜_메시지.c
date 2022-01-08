#include <stdio.h>

int n, i, c[26];
char s[100003];
int main(){
	scanf("%d", &n);
	while(n--){
		for (i=0; i<26; i++)
			c[i] = 0;
		scanf("%s", s);
		for (i=0; s[i]; i++){
			c[s[i]-'A']++;
			if (c[s[i]-'A']==3){
				if (s[i+1]!=s[i]){
					break;
				} else {
					c[s[i]-'A']=0, i++;
				}
			}
		}
		printf("%s\n", s[i]?"FAKE":"OK");
	}
	return 0;
}
