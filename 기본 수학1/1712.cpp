/*
- A: 고정 비용
- B: 한 대 생산비용
- C: 판매 가격
- n대 판매되었다고 가정하면
- A + B*n < C*n 일 때 손익분기점을 넘는다.
- 손익분기점을 넘는 n는 A / (C-B) < n
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