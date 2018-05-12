#include <stdio.h>
#include <string.h>

int compare(char*, char*);

int main(void) {

	char str1[101];
	char str2[101];
	int num;
	puts("2つの文字列を入力してください（半角で100文字以下）\n同じ位置の文字の数を教えます!(^^)!");

	printf("1つめ：");
	scanf_s("%s", str1, 101);
	printf("2つめ：");
	scanf_s("%s", str2, 101);

	num = compare(str1, str2);

	printf("同じ位置の文字の数は%dです", num);

	rewind(stdin);
	getchar();

	return 0;
}

int compare(char str1[101], char str2[101]) {
	
	int i;
	int count = 0;
	int length;
	
	if (strlen(str1) > strlen(str2)) {
		length = strlen(str2);
	}
	else {
		length = strlen(str1);
	}

	for (i = 0; i < length; i++) {
		if (str1[i] == str2[i]) {
			count++;
		}
	}

	return count;
}
