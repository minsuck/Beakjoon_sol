#include <stdio.h>
int main(){
    char numbers[100]={0,};
    int input;
    int answer=0;

    scanf("%d", &input);
    scanf("%s", numbers);

    for (int i=0; i<input; i++){
        answer += numbers[i]-48;
    }   // ���ڿ� '0'�� �ƽ�Ű �ڵ尪=48

    printf("%d", answer);

    return 0;
}