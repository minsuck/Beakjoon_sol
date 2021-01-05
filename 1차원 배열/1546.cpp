/*
알고리즘
- 과목의 갯수 입력받기 (<1000)
- 배열 생성
- 현재 성적 입력 받기 (0<&&<100, 적어도 하나는 0보다 크다)
- 최댓값 찾아서 저장
- 새로운 점수 : 원점수/최고점수*100 만들어서 배열에 다시 저장. < 배열이 int라 바로 저장 안됨. 바로 총점으로 더해주기.
- 평균 구하기
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int num_of_subject;
    int max=0;
    double total_score=0.0;

    scanf("%d", &num_of_subject);

    int *score_arry = (int*)malloc(sizeof(int)*num_of_subject);

    for (int i=0; i<num_of_subject; i++){
        scanf("%d", &score_arry[i]);

        if (max<score_arry[i])  max=score_arry[i];
    }

    for (int i=0; i<num_of_subject; i++){
        total_score += score_arry[i]/(double)max * 100.0;;
    }

    printf("%f", total_score/num_of_subject);

    return 0;
}