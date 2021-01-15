/*

*/
#include <stdio.h>
int main(){
    int testcase;
    int repeat;
    char string[20]={0};
    int k=0;

    scanf("%d", &testcase);

    for(int i=0; i<testcase; i++){
        k=0;
        scanf("%d %s", &repeat, string);

        while(string[k]!=0){
            for(int j=0; j<repeat; j++){
                printf("%c", string[k]);
            }
            k++;
        }
        printf("\n");
    }

    return 0;
}