#include<stdio.h>
int main(){
    int A;
    int B;

    scanf("%d %d", &A, &B);

    // %.16f���� 16�� �Ҽ��� 16�ڸ����� ��Ÿ���ڴٴ� �ǹ�.
    // %.16g ���������� g�� �Ҽ����Ʒ� 0�� ������.
    printf("%.16g", A/(double)B);

    return 0;
}