#include<stdio.h>
int main(){
    int multiply_up;
    int multiply_down;

    scanf("%d", &multiply_up);
    scanf("%d", &multiply_down);

    printf("%d\n", multiply_up*(multiply_down%10));
    printf("%d\n", multiply_up*((multiply_down%100)/10));
    printf("%d\n", multiply_up*(multiply_down/100));
    printf("%d", multiply_up*multiply_down);

    return 0;
}