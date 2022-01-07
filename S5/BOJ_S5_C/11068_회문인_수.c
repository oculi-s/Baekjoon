#include <stdio.h>
#include <string.h>

char s[20];
int n, a, b, i;

void base(int a){
	i = 0;
	while(a)
		s[i] = a%b+'0', a/=b, i++;
	s[i] = 0;
}

int cir(){
	int l = strlen(s);
	for (i=0; i<l/2; i++)
		if (s[i]!=s[l-i-1])
			break;
	return i==l/2;
}

int main(){
	scanf("%d", &n);
	while(n--){
		scanf("%d", &a);
		for (b=2; b<=64; b++){
			base(a);
			if (cir()){
				printf("1\n");
				break;
			}
		}
		if (b==65)
			printf("0\n");
	}
	return 0;
}
