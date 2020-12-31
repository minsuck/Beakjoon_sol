#include<stdio.h>
int main(){
    int num_of_nums;
    int standard_num;
    int input_num;

    scanf("%d %d", &num_of_nums, &standard_num);

    for(int i=0; i<num_of_nums; i++){
        scanf("%d", &input_num);
        if(input_num < standard_num)    printf("%d ", input_num);
    }
    return 0;
}