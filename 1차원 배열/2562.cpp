#include<stdio.h>
int main(){
    const int TOTAL_NUM = 9;

    int arry[TOTAL_NUM];
    int max;
    int count_sequence = 1;
    int loaction_of_value= count_sequence;

    for (int i=0; i<TOTAL_NUM; i++) scanf("%d", &arry[i]);

    max = arry[0];

    for (int i=0; i<TOTAL_NUM; i++){
        if (max<arry[i]){
            max = arry[i];
            loaction_of_value = count_sequence;
        }
        count_sequence++;
    }

    printf("%d\n%d", max, loaction_of_value);

    return 0;
}