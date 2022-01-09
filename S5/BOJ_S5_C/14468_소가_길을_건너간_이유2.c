#include <stdio.h>

int i, j, a[26], b[26][26], c;
char s[53];

int main(){
	scanf("%s", s);
	for (i=0; i<26; i++){
		for (j=0; j<26; j++)
			a[j] = 0;
		for (j=0; j<52; j++)
			if (s[j] == 'A'+i){
				j++;
				while(s[j] != 'A'+i)
					a[s[j]-'A']++, j++;
				break;
			}
		for (j=0; j<26; j++)
			if (a[j]==1)
				b[i][j] = 1, b[j][i] = 1;
	}
	for (i=0; i<26; i++)
		for (j=i+1; j<26; j++)
			c += b[i][j];
	printf("%d", c);
	return 0;
}
