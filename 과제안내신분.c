#include <stdio.h>

int main(void)
{
    int student[31] = { 0 };
    int presentNum;

    for (int i = 0; i < 28; i++) {  //�⼮�� 28����
        scanf("%d", &presentNum);   //�⼮ ��ȣ�� �Է¹޾�
        student[presentNum] = presentNum;   //�ش� �ε����� ����
    }
    for (int i = 1; i < 31; i++) {  //��� �л��� ��ȸ
        if (student[i] == 0)        //�ʱⰪ�� ������� �ʾҴٸ�
            printf("%d\n", i);      //���
    }


    return 0;
}