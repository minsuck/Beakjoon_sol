/*
�˰���
- testcase ����, �л��� ��, ������ ������ �迭
- testcase ���� �Է¹ޱ�
- testcase �� for������ �ޱ�
- for�� �ȿ��� �л��� �� �Է¹ޱ�
- �Է¹��� �л��� �� ��ŭ for�������� ���� �Է¹ޱ�
- �л����� ���� ��ճ���
- ��� ���� �л� �� / ��ü �л� �� * 100 ���
*/
#include<stdio.h>
int main(){
    int num_testcase;       //testcase�� ��
    int score_total;        //����� ���ϱ� ���� ������ ��.

    int num_student[1000]={0,};        //�л��� ��
    int score_arry[1000]={0,};       // �л����� ������ ����
    int student_upAverage[1000]={0,}; //����� �Ѵ� �л���

    scanf("%d", &num_testcase);

    for (int i=0; i<num_testcase; i++){ // testcase��ŭ �ݺ�
        score_total = 0;
        scanf("%d", &num_student[i]);   // �л� �� �Է�

        for (int j=0; j<num_student[i]; j++){   //�л� �� ��ŭ ���� �Է¹ޱ�
            scanf("%d", &score_arry[j]);
            score_total+=score_arry[j];
        }

        for (int j=0; j<num_student[i]; j++){   // ��� �Ѵ� �л� �� ����
            if (score_arry[j] > score_total/num_student[i])    student_upAverage[i]+=1;
        }
    }

    for (int i=0; i<num_testcase; i++){ //����ϴ� for��
        printf("%.3f%%\n", student_upAverage[i]/(double)num_student[i]*100);
    }
    return 0;
}