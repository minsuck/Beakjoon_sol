/*
- 각 자리가 등차수열을 이루는 수들의 개수를 세는 문제
- N을 줬을 때 1< <N인 수
- 1, 12, 123, 135...이런애들
- 1~99까진 모두 한수
- 3자리만 구하면 된다.
- a가 3자리수일 때, a/100 - a/10%10 == a/10%10 - a%10이 성립하면 count++;
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
    int count=99;   //1~99는 모두 한수

    if (N<100)  return N;   // 1~99는 모두 한수

    for(int a=110; a<=N; a++){
        if (a/100 - a/10%10 == a/10%10 - a%10)  count++;
    }

    return count;
}