#include <stdio.h>
int main(){
    int num;
    int newNum=0;
    int count = 1;

    scanf("%d", &num);
    newNum = (num%10)*10 + (num%10 + num/10)%10;

    while (num != newNum){
        newNum = (newNum%10)*10 + (newNum/10 + newNum%10)%10;
        count++;   
    }
    
    printf("%d", count);

    return 0;

}