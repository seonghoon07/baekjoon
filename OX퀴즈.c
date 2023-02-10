#include <stdio.h>
#include <string.h>

int main(void) {

    int input, score, sum;
    char test[80];

    scanf("%d", &input); // 테스트 케이스 받기

    for (int i = 0; i < input; i++) {
        sum = 0; // sum 초기화
        score = 1; // score 초기화, 연속적인 O로 마무리시 1보다 큰값으로 마무리 되기 때문
        scanf("%s", test); // 문자열 O X 받아주기
        for (int j = 0; j < strlen(test); j++) { // O와 X의 개수 세어주기
            if (test[j] == 'O') { // 테스트 j가 O라면 점수 더해주고 스코어 올리기
                sum += score;
                score++;
            }
            if (test[j] == 'X')  score = 1; // 테스트 j가 X라면 스코어 초기화 해주기
        }
        printf("%d\n", sum); // 결과 출력
    }
}