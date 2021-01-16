/*
- 숫자 입력받기
- 입력받은 숫자만큼 단어 입력받기
- 입력받은 단어 그룹단어인지 판별 후 갯수 출력
- 그룹 단어를 판별하는 함수 선언
- a~z까지 있는 배열 선언
- 입력받은 단어 한 글자씩 검사
- 현 자리와 뒷 자리가 다를 경우 해당 자리 알파벳을 1로 변경
- 이미 1인 알파벳이 다시 나올 경우 0을 리턴.
- 걸리는 알파벳 없으면 1 리턴.
*/
#include <stdio.h>
int check_group(char* input);
int main(){
    char input[100]={0};
    int num_of_word;
    int num_of_group=0;

    scanf("%d", &num_of_word);

    while (num_of_word>0){
        scanf("%s", input);
        num_of_group+=check_group(input);
        num_of_word--;
    }
    printf("%d", num_of_group);

    return 0;
}

int check_group(char* input){
    int alpha[26]={0,};
    int i=0;

    while (input[i]!=0){
        if (input[i] != input[i+1]){
            if(alpha[input[i]-'a']==1)  return 0;
            else    alpha[input[i]-'a']=1;
        }
        i++;
    }
    return 1;
}