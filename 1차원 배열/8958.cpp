/*
�˰���
- testcase�� ���� �Է¹ޱ�
- 2���� �迭 ���� (�ʱ�ȭ x, �ڷ����� ���ڿ�, [ũ��][80])
- ������ ������ �迭 �ϳ� ����.
- 'O', 'X'�� �̷���� ���ڿ� �Է¹ޱ� ( %s ���, ������ 0~80)
- ���� ����ؼ� �����迭�� �ֱ�
- �������
    > if 'O', score_add+=1, score_total+=score_add
    > else score_add=0
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int num_testcase;
    scanf("%d", &num_testcase); //testcase �Է¹���

    char results_quiz[num_testcase][80]={'X',};    //quiz �� �����ϴ� 2���� �迭
    // char *results_quiz = (char*)malloc(sizeof(char)*num_testcase);
    int score_total[num_testcase]={0,};          // testcase���� ���� ����
    int score_add=0;                        // ���ϴ� ���� (2�� �������� ������ score_add=2)

    for (int i=0; i<num_testcase; i++)  scanf("%s", &results_quiz[i]);

    // ������ ����ϴ� 2�� �迭
    for (int i=0; i<num_testcase; i++){ // testcase ��ȯ
        for(int j=0; j<80; j++){            // �� ���� ����� ��� Ž��
            if(results_quiz[i][j] == 'O') { // 'O'��� score_total�� ������ ���Ѵ�.
                score_add+=1;
                score_total[i]+=score_add;
            }
            else    score_add=0;    // 'O'�� �ƴ� ��� score_add�� �ʱ�ȭ�Ѵ�.
        }
    }

    for (int i=0; i<num_testcase; i++)  printf("%d\n", score_total[i]);

    return 0;
}