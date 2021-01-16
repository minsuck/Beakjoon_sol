/*
- 크로아티아 알파벳은 2자~3자로 구별된다
- 입력된 문자열 input에서 i, i+1과 2글자인 크로아티아 알파벳을 검사하고
- 동일한 알파벳이 있다면 알파벳을 세고, i++
- 3글자인 크로아티아 알파벳도 동일한 방법으로 검사
*/
#include <stdio.h>
int main(){
    char input[100]={0};
    int num_of_alpha=0;
    int i=0;

    scanf("%s", input);

    while (input[i]!=0){
        if (input[i] == 'c'){
            if(input[i+1]=='='){
                i+=2;
            }
            else if(input[i+1]=='-'){
                i+=2;
            }
            else{
                i++;
            }
        }
        else if (input[i] == 'd'){
            if(input[i+1]=='z'){
                if(input[i+2]=='='){
                    i+=3;
                }
            }
            else if(input[i+1]=='-'){
                i+=2;
            }
            else{
                i++;
            }
        }
        else if (input[i] == 'l'){
            if(input[i+1]=='j'){
                i+=2;
            }
            else{
                i++;
            }
        }
        else if (input[i] == 'n'){
            if(input[i+1]=='j'){
                i+=2;
            }
            else{
                i++;
            }
        }
        else if (input[i] == 's'){
            if(input[i+1]=='='){
                i+=2;
            }
            else{
                i++;
            }
        }
        else if (input[i] == 'z'){
            if(input[i+1]=='='){
                i+=2;
            }
            else{
                i++;
            }
        }
        else{
            i++;
        }
        num_of_alpha++;
    }

    printf("%d", num_of_alpha);

    return 0;
}