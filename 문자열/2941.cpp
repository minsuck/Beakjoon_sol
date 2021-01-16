/*
- 크로아티아 알파벳은 2자~3자로 구별된다
- 알파벳은 -, =, j로 구별되므로 이 세 문자만 따로 케이스를 둔다.
*/
#include <stdio.h>
int main(){
    char input[100]={0};
    int num_of_alpha=0;
    int i=0;

    scanf("%s", input);

    while (input[i]!=0){
        if (input[i]=='='){
            if (input[i-1]=='c')    num_of_alpha--;
            else if (input[i-1]=='z' && input[i-2]=='d')    num_of_alpha-=2;
            else if (input[i-1]=='z')    num_of_alpha--;
            else if (input[i-1]=='s')    num_of_alpha--;
        }
        else if (input[i]=='-'){
            if (input[i-1]=='c')    num_of_alpha--;
            else if (input[i-1]=='d')    num_of_alpha--;
        }
        else if (input[i]=='j'){
            if (input[i-1]=='l')    num_of_alpha--;
            else if (input[i-1]=='n')    num_of_alpha--;
        }
        i++;
        num_of_alpha++;
    }

    printf("%d", num_of_alpha);

    return 0;
}