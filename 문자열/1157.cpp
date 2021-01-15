/*
- 단어 입력받기
- 소문자(97~122), 대문자(65~90)
- 소문자는 대문자로 변환
- 각 알파벳마다 사용된 갯수 세기
- 단어에서 가장 많이 사용된 알파벳을 찾고
- 대문자로 출력하는데, 가장 많이 사용된 알파벳이 여러개면 ?출력
- 알파벳 배열에 갯수를 저장하고 가장 큰 수를 고른다.
- 찾은 가장 큰 수가 2개 이상이면 ?출력, 아니면 그대로 출력
*/

#include <stdio.h>
int main(){
    char input[1000000];    // 단어 저장
    int alpha[26]={0};          // 알파벳 각 등장횟수
    int k=0;
    int max=0;                  // 가장 많이 사용된 횟수
    int maxi=0;                 // 가장 많이 사용된 알파벳의 위치
    int is_maxnum_twice=0;      // 가장 많이 사용되 알파벳이 또 있는지?

    scanf("%s", input);

    while(input[k] != 0){
        if(input[k]>='a' && input[k]<='z'){
            input[k] = input[k] - 'a' + 'A';
        }
        alpha[input[k]-'A']++;
        k++;
    }

    for (int i=0; i<26; i++){
        if (max<alpha[i]){
           max=alpha[i];
           maxi=i;
           is_maxnum_twice=0;
        }
        if (max==alpha[i]){
            is_maxnum_twice++;
        }
    }

    if (is_maxnum_twice==1){
        printf("%c", maxi+'A');
    }  
    else{
        printf("?");
    }

    return 0;
}