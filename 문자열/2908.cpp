/*
- 두 수 입력
- 숫자를 뒤집는 함수에 각각 대입
- 더 큰수 출력
*/
#include <stdio.h>

int reverse(int num);

int main(){
    int numA;
    int numB;
    int answer;

    scanf("%d %d", &numA, &numB);

    numA = reverse(numA);
    numB = reverse(numB);
    answer = numA > numB ? numA : numB;

    printf("%d", answer);

    return 0;
}

int reverse(int num){
    int reverse_num=0;

    while (num>0){
        reverse_num = reverse_num*10 + num%10;
        num /= 10;
    }
    return reverse_num;
}