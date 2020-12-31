#include <stdio.h>
int main(){
    int num_line_of_star;

    scanf("%d", &num_line_of_star);

    for(int i=1; i<=num_line_of_star; i++){
        for(int j=0; j<i; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}