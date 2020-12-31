#include<stdio.h>
int main(){
    int A;
    int B;

    scanf("%d %d", &A, &B);

    // %.16f에서 16은 소수점 16자리까지 나타내겠다는 의미.
    // %.16g 형식지정자 g는 소수점아래 0은 버린다.
    printf("%.16g", A/(double)B);

    return 0;
}