/*
- A: ���� ���
- B: �� �� ������
- C: �Ǹ� ����
- n�� �ǸŵǾ��ٰ� �����ϸ�
- A + B*n < C*n �� �� ���ͺб����� �Ѵ´�.
- ���ͺб����� �Ѵ� n�� A / (C-B) < n
*/
#include <stdio.h>
int main(){
    int A, B, C;
    int n;

    scanf("%d %d %d",&A, &B, &C);

    if (C > B){
        n = A / (C-B) + 1;
        printf("%d", n);
    }
    else{
        printf("-1");
    }
    
    return 0;
}