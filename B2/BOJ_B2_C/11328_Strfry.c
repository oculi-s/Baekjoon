#include <stdio.h>

int n, i, c[26], d[26];
char a[1001];
int main(){
	scanf("%d", &n);
	while(n--){
		for (i = 0; i<26; i++){
			c[i] = 0; d[i] = 0;			
		}
		scanf("%s", a);
		i = 0;
		while(a[i]){c[a[i]-'a']++;i++;}
		scanf("%s", a);
		i = 0;
		while(a[i]){d[a[i]-'a']++;i++;}
		for (i = 0; i < 26; i++){
			if (c[i] != d[i]){
				printf("Impossible\n");
				break;			
			}			
		}
		if (i == 26){
			printf("Possible\n");			
		}
	}
	return 0;
}
