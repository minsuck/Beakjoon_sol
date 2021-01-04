/*
알고리즘
- testcase의 갯수 입력받기
- 2차원 배열 생성 (초기화 x, 자료형은 문자열, [크기][80])
- 점수를 저장할 배열 하나 생성.
- 'O', 'X'로 이루어진 문자열 입력받기 ( %s 사용, 범위는 0~80)
- 점수 계산해서 점수배열에 넣기
- 점수계산
    > if 'O', score_add+=1, score_total+=score_add
    > else score_add=0
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int num_testcase;
    scanf("%d", &num_testcase); //testcase 입력받음

    char results_quiz[num_testcase][80]={'X',};    //quiz 답 저장하는 2차원 배열
    // char *results_quiz = (char*)malloc(sizeof(char)*num_testcase);
    int score_total[num_testcase]={0,};          // testcase별로 점수 저장
    int score_add=0;                        // 더하는 점수 (2개 연속으로 맞으면 score_add=2)

    for (int i=0; i<num_testcase; i++)  scanf("%s", &results_quiz[i]);

    // 점수를 계산하는 2중 배열
    for (int i=0; i<num_testcase; i++){ // testcase 순환
        for(int j=0; j<80; j++){            // 각 퀴즈 결과를 모두 탐색
            if(results_quiz[i][j] == 'O') { // 'O'라면 score_total에 점수를 더한다.
                score_add+=1;
                score_total[i]+=score_add;
            }
            else    score_add=0;    // 'O'가 아닐 경우 score_add를 초기화한다.
        }
    }

    for (int i=0; i<num_testcase; i++)  printf("%d\n", score_total[i]);

    return 0;
}