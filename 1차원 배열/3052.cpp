/*
알고리즘
- 숫자 10개 입력받기
- 각각 42로 나누기
- 10 크기의 배열에 각각저장
- 0으로 초기화된 42크기의 배열 선언
- 10짜리 배열값 = 1로 바꿔준 다음 다 더하기 = 서로 다른 값의 갯수
*/
#include <stdio.h>
int main(){
    int arry_of_nums[10];
    int arry_of_remainder[42]={0,};
    int count_remainder=0;

    for (int i=0; i<10; i++){
        scanf("%d", &arry_of_nums[i]); 
        arry_of_nums[i]%=42;
    }

    for (int i=0; i<10; i++)    arry_of_remainder[arry_of_nums[i]]=1;
    for (int i=0; i<42; i++)    count_remainder+=arry_of_remainder[i];

    printf("%d", count_remainder);

    return 0;
}
