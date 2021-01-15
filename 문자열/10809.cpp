/*
- 'a'의 아스키 코드: 97
- 'z'의 아스키 코드: 122
*/
#include <stdio.h>
int main(){
    char input[100]={0};
    int alpha[26]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
                    -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
                    -1,-1,-1,-1,-1,-1};
    int i=0;

    scanf("%s", input);

    while (input[i]!=0){
        if (alpha[input[i]-97]==-1){
            alpha[input[i]-97]=i;
        }
        i++;
    }

    for (int j=0; j<26; j++)    printf("%d ", alpha[j]);

    return 0;
}