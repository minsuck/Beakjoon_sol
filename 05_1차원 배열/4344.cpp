/*
알고리즘
- testcase 갯수, 학생의 수, 총점과 각각의 배열
- testcase 갯수 입력받기
- testcase 를 for문으로 받기
- for문 안에서 학생의 수 입력받기
- 입력받은 학생의 수 만큼 for문돌려서 점수 입력받기
- 학생들의 점수 평균내기
- 평균 넘은 학생 수 / 전체 학생 수 * 100 출력
*/
#include<stdio.h>
int main(){
    int num_testcase;       //testcase의 수
    int score_total;        //평균을 구하기 위한 점수의 합.

    int num_student[1000]={0,};        //학생의 수
    int score_arry[1000]={0,};       // 학생들의 점수를 저장
    int student_upAverage[1000]={0,}; //평균이 넘는 학생수

    scanf("%d", &num_testcase);

    for (int i=0; i<num_testcase; i++){ // testcase만큼 반복
        score_total = 0;
        scanf("%d", &num_student[i]);   // 학생 수 입력

        for (int j=0; j<num_student[i]; j++){   //학생 수 만큼 점수 입력받기
            scanf("%d", &score_arry[j]);
            score_total+=score_arry[j];
        }

        for (int j=0; j<num_student[i]; j++){   // 평균 넘는 학생 수 저장
            if (score_arry[j] > score_total/num_student[i])    student_upAverage[i]+=1;
        }
    }

    for (int i=0; i<num_testcase; i++){ //출력하는 for문
        printf("%.3f%%\n", student_upAverage[i]/(double)num_student[i]*100);
    }
    return 0;
}