#include <stdio.h>
int main(){
    char numbers[100]={0,};
    int input;
    int answer=0;

    scanf("%d", &input);
    scanf("%s", numbers);

    for (int i=0; i<input; i++){
        answer += numbers[i]-48;
    }   // 문자열 '0'의 아스키 코드값=48

    printf("%d", answer);

    return 0;
}