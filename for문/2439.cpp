#include <stdio.h>
int main(){
    int num_line_of_star;
    int i, j, k;

    scanf("%d", &num_line_of_star);

    for(i=1; i<=num_line_of_star; i++){
        for(k=num_line_of_star-i; k>0; k--)   printf(" ");
        for(j=0; j<i; j++)   printf("*");
        printf("\n");
    }
    return 0;
}