#include<stdio.h>

int main(void) {

	int a, b, c, d=-1, result, input, count = 0;

	scanf("%d", &input);
	result = input;

	while (d != result) {
		a = input / 10; // 10�� �ڸ� ���ϱ�
		b = input % 10; // 1�� �ڸ� ���ϱ�
		c = (a + b) % 10; // ���� ���� ������ �� ���ϱ�
		d = (b * 10) + c; // 1�� �ڸ��� * 10 �ѰͰ� ���� ���� ������ �� ���ϱ�
		input = d; // input�� ���ο� ���� �ʱ�ȭ
		count++; // ����Ŭ �� �÷��ֱ�
	}
	printf("%d", count);
	

	return 0;
}