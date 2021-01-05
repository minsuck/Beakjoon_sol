#include<stdio.h>
int main(){
    int input_num;

    scanf("%d", &input_num);

    for(int i=input_num; i>0; i--)  printf("%d\n", i);
    return 0;
}