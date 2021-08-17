#include <stdio.h>
#include <string.h>

int i, e;
char t[102], s[102];
int main() {
	gets(t);
	while (t[0] != '.') {
		for (i = 0; i < strlen(t); i++) {
			if (t[i] == '(' || t[i] == ')' || t[i] == '[' || t[i] == ']')
				s[e++] = t[i];
			if (s[e - 1] == ')' && s[e - 2] == '(')
				e -= 2;
			else if (s[e - 1] == ']' && s[e - 2] == '[')
				e -= 2;
		}
		printf("%s\n", e ? "no" : "yes");
		gets(t);
		e = 0;
	}
}