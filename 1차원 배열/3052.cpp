/*
�˰���
- ���� 10�� �Է¹ޱ�
- ���� 42�� ������
- 10 ũ���� �迭�� ��������
- 0���� �ʱ�ȭ�� 42ũ���� �迭 ����
- 10¥�� �迭�� = 1�� �ٲ��� ���� �� ���ϱ� = ���� �ٸ� ���� ����
*/
#include <stdio.h>
int main(){
    int arry_of_nums[10];
    int arry_of_remainder[42]={0,};
    int count_remainder=0;

    for (int i=0; i<10; i++){
        scanf("%d", &arry_of_nums[i]); 
        arry_of_nums[i]%=42;
    }

    for (int i=0; i<10; i++)    arry_of_remainder[arry_of_nums[i]]=1;
    for (int i=0; i<42; i++)    count_remainder+=arry_of_remainder[i];

    printf("%d", count_remainder);

    return 0;
}
