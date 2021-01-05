#include <stdio.h>
#include <stdlib.h>

int main() {
    int input;      // 입력받을 배열의 크기
    int min, max;   // 최솟값, 최댓값

    scanf("%d", &input);    //크기 입력받기

    int *arry = (int*)malloc(sizeof(int)*input); //입력받은 input의 크기*int크기 만큼 메모리 할당

    //배열의 원소들 입력받기
    for (int i=0; i<input; i++) scanf("%d", &arry[i]);

    min, max = arry[0]; //최솟값, 최댓값을 찾기 위해 arry의 첫 번째 값을 각각 할당.

    // 최솟값, 최댓값을 찾는 반복문
    for (int i=0; i<input; i++){
        if (min>arry[i])    min = arry[i];
        if (max<arry[i])    max = arry[i];
    }

    printf("%d %d", min, max);

    free(arry); //동적할당 이후에는 메모리를 해제해줘야함

    return 0;
}
