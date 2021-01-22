/*
- 1/1
- 1/2 2/1
- 3/1 2/2 1/3
- 1/4 2/3 3/2 4/1
- 5/1 4/2 3/3 2/4 1/5
- i를 1부터 세면, i/1 > i-1/2 ... 1/i (홀수)
- 짝수는 분모분자 반대
- 1부터 더해가서 
*/
#include <stdio.h>
int main(){
    int input=0;
    int count=0;
    int denominator, molecule;

    scanf("%d", &input);

    while (input > 0){
        count++;
        input = input - count;
    }

    //printf("count = %d, input = %d\n", count, input);

    if (count%2 != 0){
        molecule = 1+(-1)*input;
        denominator = count - (-1)*input;
    }
    else {
        molecule = count - (-1)*input;
        denominator = 1+(-1)*input;
    }

    printf("%d/%d", molecule, denominator);

    return 0;
}