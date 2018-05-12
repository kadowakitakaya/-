#include <stdio.h>

int numCatLevel(int);
int stringCatLevel(char*);

int main(void) {

	int num;
	char string[11];
	int catLevel;

	puts("あなたのネコ度(=^・・^=)を判定します");
	puts("8桁以下の整数と10文字以下の英文字を入力してください(=^・・^=)");
	printf("8桁以下の数字:");
	scanf_s("%d", &num);
	printf("10文字以下の英文字：");
	scanf_s("%s", string, 11);

	catLevel = numCatLevel(num);
	catLevel += stringCatLevel(string);

	printf("あなたのネコ度=^_^=は%d％です", catLevel);
	rewind(stdin);
	getchar();

	return 0;
}


int numCatLevel(int num) {

	int i;
	int count = 0;
	int sum = 0;
	
	for (i = 0; i < 8; i++) {
		//に(2)ゃーん
		if (num % 10 == 2) {
			sum += 10;
			count++;
		}
		num /= 10;
	}
	sum *= count;
	
	return sum;
}

int stringCatLevel(char str[11]) {

	int i;
	int sum = 0;
	int count = 0;

	for (i = 0; i < 21; i++) {
		if (str[i] == 'c') {
			sum += 3;
			count++;
		}
		else if (str[i] == 'a') {
			sum += 3;
			count++;
		}
		else if (str[i] == 't') {
			sum += 3;
			count++;
		}
	}
	sum *= count;

	return sum;
}
