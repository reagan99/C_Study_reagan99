#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	char str[1000001];
	int len;
	int cnt = 0;

	scanf("%[^\n]s", str);
	len = strlen(str);

	if (str[0] == ' ') {
		cnt--;
	}

	for (int i = 0; i < len-1 ; i++) {
		if (str[i] == ' ') {
			cnt++;
		}
	}
	cnt++;

	printf("%d", cnt);

	return 0;
}