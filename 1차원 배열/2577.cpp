#include<stdio.h>
int main(){
    /*
    �˰���
    - ũ�� 10�� �迭(0~9���� ������ �迭) ����
    - A, B, C �Է¹ޱ�
    - �� ���� �� ����
    - �迭[���� ��%10] += 1�� ���ذ���
    - ���
    */
   int arry_of_nums[10] ={0,};
   int A, B, C;
   int ABC; 

   scanf("%d", &A);
   scanf("%d", &B);
   scanf("%d", &C);

    ABC = A*B*C;

    for (int i=ABC; i>0; i/=10) arry_of_nums[i%10]++;

    for (int i=0; i<10; i++)    printf("%d\n", arry_of_nums[i]);

   return 0;
}