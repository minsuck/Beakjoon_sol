/*
- 올라가는 A, 내려가는 B, 나무 막대 V, 걸리는 날자 day가 필요
- 목표 위치에 올라가면 더 이상 내려가지 않음
- 입력을 5, 3, 100으로 받았을 때, 현재 위치가 95보다 크면 다음 날에는 무조건 꼭대기에 오르게 된다.
- 그러므로 V-A에 도달한 날을 구한 뒤 1을 더하면 되는데,
- 이는 V-A / A-B로 구할 수 있다.
- 근데 이는 소수점이 나올 수 있는데, 이 경우는 딱 100으로 떨어지는 것이 아니라
- 100을 넘어가는 경우 (ex 97 + 5 = 102)이므로 올리면 된다.
- 문제에서는 올림 연산을 따로 사용하지 않고 소수점을 버린 부분보다 안 버린 부분이 크면 +2를 했다.
*/
#include <stdio.h>
int main(){
    int A, B, V, day=0;
    int last_day;
    double last_location;

    scanf("%d %d %d", &A, &B, &V);

    last_location = (V-A)/((A-B)*1.0);
    last_day = (V-A)/(A-B);
    //printf("%d %d %d %d %g\n", A, B, V, last_day, last_location);

    if ((double)last_day < last_location)   day = last_day+2;
    else    day = last_day+1;

/*
    while (location < V){
        day++;
        location+=A;
        if (location>=V)   break;
        else location-=B;
    }                   시간 초과!
*/

    printf("%d", day);

    return 0;
}