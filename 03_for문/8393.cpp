#include <stdio.h>
int main(){
    int number_input;
    int answer=0;

    scanf("%d", &number_input);

    for(int i=1;i<=number_input;i++){
        answer += i;
    }
    printf("%d", answer);
    return 0;
}