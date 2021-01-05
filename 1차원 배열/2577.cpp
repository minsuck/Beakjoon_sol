#include<stdio.h>
int main(){
    /*
    알고리즘
    - 크기 10의 배열(0~9까지 저장할 배열) 선언
    - A, B, C 입력받기
    - 셋 곱한 값 저장
    - 배열[곱한 값%10] += 1로 더해가기
    - 출력
    */
   int arry_of_nums[10] ={0,};
   int A, B, C;
   int ABC; 

   scanf("%d", &A);
   scanf("%d", &B);
   scanf("%d", &C);

    ABC = A*B*C;

    for (int i=ABC; i>0; i/=10) arry_of_nums[i%10]++;

    for (int i=0; i<10; i++)    printf("%d\n", arry_of_nums[i]);

   return 0;
}