/*
�˰���
- ������ ���� �Է¹ޱ� (<1000)
- �迭 ����
- ���� ���� �Է� �ޱ� (0<&&<100, ��� �ϳ��� 0���� ũ��)
- �ִ� ã�Ƽ� ����
- ���ο� ���� : ������/�ְ�����*100 ���� �迭�� �ٽ� ����. < �迭�� int�� �ٷ� ���� �ȵ�. �ٷ� �������� �����ֱ�.
- ��� ���ϱ�
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