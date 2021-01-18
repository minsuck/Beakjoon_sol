/*
- 1 > 1
- 2 > 2~7 (+6)
- 3 > 8~19 (+12)
- 4 > 20~37 (+18)
- 5 > 38~61 (+24)
- i, k가 있을 때, 방의 최대 값은 6*i+1만큼이고, i=k+1만큼 늘어난다.
- 
*/
#include <stdio.h>
int honeycomb(int num);
int main(){
    int num;

    scanf("%d", &num);

    printf("%d", honeycomb(num));

    return 0;
}

int honeycomb(int num){
    int room=1;
    int i=0, k=0;

    while (num>6*i+1){
        k++;
        i+=k;
        room++;
    }
    return room;
}