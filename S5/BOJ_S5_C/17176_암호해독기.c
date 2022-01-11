#include <stdio.h>

int n, i, t, a[53], b[53];
char s[100001];

int main(){
	scanf("%d", &n);
	for (i=0; i<n; i++)
		scanf("%d", &t), a[t]++;
	scanf("\n");
	gets(s);
	for (i=0; s[i]; i++)
		if (s[i] == ' ')
			b[0]++;
		else if (s[i]>='A'&&s[i]<='Z')
			b[s[i]-'A'+1]++;
		else
			b[s[i]-'a'+27]++;
	for (i=0; i<53; i++)
		if (a[i]!=b[i])
			break;
	printf("%c", i==53?'y':'n');
	return 0;
}
