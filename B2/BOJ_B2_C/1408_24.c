#include <stdio.h>

char a[9], b[9];
int c[3], d[3], t, i;
int main(){
	scanf("%s\n%s", a, b);
	for (i = 0; i<3; i++){
		c[i] = (a[i*3]-'0')*10+(a[i*3+1]-'0');
		d[i] = (b[i*3]-'0')*10+(b[i*3+1]-'0');
	}
	t = (d[0]-c[0])*3600+(d[1]-c[1])*60+d[2]-c[2];
	t = (t+86400)%86400;
	printf("%02d:%02d:%02d", t/3600, t%3600/60, t%60);
	return 0;
}
