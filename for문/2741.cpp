#include <stdio.h>
int main(){
    int number_input;

    scanf("%d", &number_input);

    for(int i=1;i<=number_input;i++){
        printf("%d\n", i);
    }
    
    return 0;
}