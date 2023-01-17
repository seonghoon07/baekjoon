#include<stdio.h>

int main(void) {

	int a, b, c, d=-1, result, input, count = 0;

	scanf("%d", &input);
	result = input;

	while (d != result) {
		a = input / 10; // 10의 자리 구하기
		b = input % 10; // 1의 자리 구하기
		c = (a + b) % 10; // 합의 가장 오른쪽 수 구하기
		d = (b * 10) + c; // 1의 자리수 * 10 한것과 합의 가장 오른쪽 수 더하기
		input = d; // input을 새로운 수로 초기화
		count++; // 사이클 수 올려주기
	}
	printf("%d", count);
	

	return 0;
}