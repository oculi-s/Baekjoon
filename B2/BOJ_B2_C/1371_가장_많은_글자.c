#include <stdio.h>
#include <string.h>

int i, c[27], m;
char s;
int main(){
	while(scanf("%c", &s) != EOF)
		if (s >= 'a' && s <= 'z')
			c[s-'a']++;
	for (i = 0; i<27; i++)
		m = c[i] > c[m] ? i:m;
	for (i = 0; i<27; i++)
		if (c[i] == c[m])
			printf("%c", i+'a');
	return 0;
}
