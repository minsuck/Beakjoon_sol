/*
- �� �ڸ��� ���������� �̷�� ������ ������ ���� ����
- N�� ���� �� 1< <N�� ��
- 1, 12, 123, 135...�̷��ֵ�
- 1~99���� ��� �Ѽ�
- 3�ڸ��� ���ϸ� �ȴ�.
- a�� 3�ڸ����� ��, a/100 - a/10%10 == a/10%10 - a%10�� �����ϸ� count++;
*/
#include <stdio.h>

int make_hanNum(int N);

int main(){
    int N=0;

    scanf("%d", &N);

    printf("%d", make_hanNum(N));

    return 0;
}

int make_hanNum(int N){
    int count=99;   //1~99�� ��� �Ѽ�

    if (N<100)  return N;   // 1~99�� ��� �Ѽ�

    for(int a=110; a<=N; a++){
        if (a/100 - a/10%10 == a/10%10 - a%10)  count++;
    }

    return count;
}