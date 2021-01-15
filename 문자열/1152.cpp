/*
- 문장 입력받기
- 단어 단어 단어 단어 단어
- 공백이 연속해서 나오는 경우는 없음
- 빈 문자열일 경우 0
- 첫 글자가 공백이 아니고 빈 문자열이 아닐 경우 word++
- 그 다음부턴 공백이 나올 때 마다 공백 뒤 자리를 검사해 문자면 word++
*/
#include <stdio.h>

int main(){
    char sentence[1000000]={0,};
    int words=0, k=0;

    scanf("%[^\n]s", sentence);

    if (sentence[0] != ' ' && sentence[0] != 0) words++;
    
    while (sentence[k]!=0){
        if (sentence[k] == ' '){
            if (sentence[k+1] != 0){
                words++;
            }
        }
        k++;
    }

    printf("%d", words);

    return 0;
}