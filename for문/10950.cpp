#include <stdio.h>
int main(){
    int number_of_case;
    int num_front, num_back;

    scanf("%d", &number_of_case);

    for(int i=0;i<number_of_case;i++){
        scanf("%d %d", &num_front, &num_back);
        printf("%d\n", num_front+num_back);
    }
    return 0;
}