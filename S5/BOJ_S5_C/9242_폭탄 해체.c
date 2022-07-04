#include <stdio.h>
#include <string.h>

int d, i, j, v, l;
char t[100], a[8][6];
char n[10][6] = {"75557", "11111", "71747", "71717", "55711", "74717", "74757", "71111", "75757", "75717"};

int find(char s[6]){
  int i;
  for (i=0; i<10; i++)
    if (!strcmp(n[i], s))
      return i;
  return -1;
}

int main(){
  for (i=0; i<5; i++){
    gets(t);
    l = strlen(t);
    for (j=0; j<l; j++)
      t[j] = t[j] == '*';
    for (j=0; j<l; j+=4){
      v = t[j]*4+t[j+1]*2+t[j+2];
      a[j/4][i] = v + '0';
    }
  }
  for (i=0; i<=l/4; i++){
    v = find(a[i]);
    if (v == -1)
      break;
    else
      d += v;
  }
  if (v == -1)
    printf("BOOM!!");
  else if (d % 3 || v % 2)
    printf("BOOM!!");
  else
    printf("BEER!!");
  return 0;
}