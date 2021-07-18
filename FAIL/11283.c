#include <stdio.h>
#include <stdlib.h>

int main() {
	char s[3];
	scanf("%s", s);
	char a[19][3] = { "ぁ", "あ", "い", "ぇ", "え", "ぉ", "け", "げ", "こ", "さ", "ざ", "し", "じ", "す", "ず", "せ", "ぜ", "そ", "ぞ" };
	for (int i = 0; i < 19; i++) {
		printf("%d %d %d %d %d\n",a[i][0],a[i][1] + 95, s[0],s[1],s[1] >= a[i][1]);
	}

	in_char = in_char - 0xAC00;
	in_cho = in_char / (0x0015 * 0x001C);
	in_jung = (in_char / 0x001C) % 0x0015;
	in_jong = in_char % 0x001C;

	return 0;
}