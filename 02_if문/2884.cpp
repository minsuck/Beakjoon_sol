#include <stdio.h>

int main(){
    int H=0;
    int M=0;

    scanf("%d %d", &H, &M);

    int min=M-45;

    if (min<0){
        H--;
        min += 60;
        if (H<0)    H += 24;
    }

    printf("%d %d", H, min);
    
    return 0;
}