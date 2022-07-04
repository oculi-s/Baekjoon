#include <stdio.h>

int n, a[100002], b[100002], z[100002], i, m = 2e9;
char s[100001];

void _rec(int t[100002], int i, int c){
  if (i == n+1){
    if (c < m && t[n] == z[n])
      m = c;
  } else {
    if (t[i-1] == z[i-1])
      _rec(t, i + 1, c);
    else
      t[i-1] = !t[i-1], t[i+1] = !t[i+1], t[i] = !t[i], _rec(t, i + 1, c + 1);
  }
}

int main(){
  b[0] = 1;
  scanf("%d", &n);
  scanf("%s", s);
  for (i=0; i<n; i++)
    a[i+1] = s[i] - '0', b[i+1] = a[i+1];
  scanf("%s", s);
  for (i=0; i<n; i++)
    z[i+1] = s[i] - '0';
  _rec(a, 1, 0);
  _rec(b, 1, 0);
  printf("%d", m == 2e9 ? -1 : m);
  return 0;
}