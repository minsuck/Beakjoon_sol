/*
- ���� �Է¹ޱ�
- �Է¹��� ���ڸ�ŭ �ܾ� �Է¹ޱ�
- �Է¹��� �ܾ� �׷�ܾ����� �Ǻ� �� ���� ���
- �׷� �ܾ �Ǻ��ϴ� �Լ� ����
- a~z���� �ִ� �迭 ����
- �Է¹��� �ܾ� �� ���ھ� �˻�
- �� �ڸ��� �� �ڸ��� �ٸ� ��� �ش� �ڸ� ���ĺ��� 1�� ����
- �̹� 1�� ���ĺ��� �ٽ� ���� ��� 0�� ����.
- �ɸ��� ���ĺ� ������ 1 ����.
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