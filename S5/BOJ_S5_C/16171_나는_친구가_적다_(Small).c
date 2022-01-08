#include <stdio.h>

int i, j, e;
char s[101], k[101], a[201];

int main(){
	scanf("%s\n%s", s, k);
	for (i=0; s[i]; i++)
		if (('a'<=s[i]&&s[i]<='z')||('A'<=s[i]&&s[i]<='Z'))
			a[e] = s[i], e++;
	for (i=0; a[i]; i++){
		if (a[i]==k[0])
			for (j=1; k[j]; j++)
				if (k[j]!=a[i+j])
					break;
		if (!k[j])
			break;
	}
	printf("%d", k[j]?0:1);
	return 0;
}
