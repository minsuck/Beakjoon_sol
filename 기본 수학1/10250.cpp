/*
- H, W, N 입력받음
- N을 H로 나눈 몫이 호수, 나머지가 층수
- 나머지 연산은 자기 자신을 포함하지 않으므로
- H=6일 때 6층이 0으로 표기되지 않도록 조심.
*/
#include <stdio.h>
int main(){
    int T, H, W, N;
    int floor, room;

    scanf("%d", &T);

    while (T>0){
        scanf("%d %d %d", &H, &W, &N);
        floor = N % H;
        room = N / H + 1;   //일반적인 상황

        if (floor==0){      //N이 H로 나누어 떨어질 때 보정
           floor = H;
           room--;
        }

        printf("%d%02d\n", floor, room); //양식을 맞추기 위한 %02d
        T--;
    }

    return 0;
}