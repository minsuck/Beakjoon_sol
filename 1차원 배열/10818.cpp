#include <stdio.h>
#include <stdlib.h>

int main() {
    int input;      // �Է¹��� �迭�� ũ��
    int min, max;   // �ּڰ�, �ִ�

    scanf("%d", &input);    //ũ�� �Է¹ޱ�

    int *arry = (int*)malloc(sizeof(int)*input); //�Է¹��� input�� ũ��*intũ�� ��ŭ �޸� �Ҵ�

    //�迭�� ���ҵ� �Է¹ޱ�
    for (int i=0; i<input; i++) scanf("%d", &arry[i]);

    min, max = arry[0]; //�ּڰ�, �ִ��� ã�� ���� arry�� ù ��° ���� ���� �Ҵ�.

    // �ּڰ�, �ִ��� ã�� �ݺ���
    for (int i=0; i<input; i++){
        if (min>arry[i])    min = arry[i];
        if (max<arry[i])    max = arry[i];
    }

    printf("%d %d", min, max);

    free(arry); //�����Ҵ� ���Ŀ��� �޸𸮸� �����������

    return 0;
}
