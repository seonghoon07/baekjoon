#include <stdio.h>
#include <string.h>

int main(void) {

    int input, score, sum;
    char test[80];

    scanf("%d", &input); // �׽�Ʈ ���̽� �ޱ�

    for (int i = 0; i < input; i++) {
        sum = 0; // sum �ʱ�ȭ
        score = 1; // score �ʱ�ȭ, �������� O�� �������� 1���� ū������ ������ �Ǳ� ����
        scanf("%s", test); // ���ڿ� O X �޾��ֱ�
        for (int j = 0; j < strlen(test); j++) { // O�� X�� ���� �����ֱ�
            if (test[j] == 'O') { // �׽�Ʈ j�� O��� ���� �����ְ� ���ھ� �ø���
                sum += score;
                score++;
            }
            if (test[j] == 'X')  score = 1; // �׽�Ʈ j�� X��� ���ھ� �ʱ�ȭ ���ֱ�
        }
        printf("%d\n", sum); // ��� ���
    }
}