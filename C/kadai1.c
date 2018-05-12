#include <stdio.h>

int main(void) {

	int num1;
	int num2;

	puts("2つの整数を入力してください");
	printf("1つめの数値:");
	scanf_s("%d", &num1);
	printf("2つめの数値:");
	scanf_s("%d", &num2);

	printf("足した場合は%dです\n", num1 + num2);
	printf("引いた場合は%dです\n", num1 - num2);
	printf("かけた場合は%dです\n", num1 * num2);
	printf("割った場合は%dです\n", num1 / num2);

	rewind(stdin);
	getchar();

	return 0;
}
