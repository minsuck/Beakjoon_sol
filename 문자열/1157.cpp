/*
- �ܾ� �Է¹ޱ�
- �ҹ���(97~122), �빮��(65~90)
- �ҹ��ڴ� �빮�ڷ� ��ȯ
- �� ���ĺ����� ���� ���� ����
- �ܾ�� ���� ���� ���� ���ĺ��� ã��
- �빮�ڷ� ����ϴµ�, ���� ���� ���� ���ĺ��� �������� ?���
- ���ĺ� �迭�� ������ �����ϰ� ���� ū ���� ����.
- ã�� ���� ū ���� 2�� �̻��̸� ?���, �ƴϸ� �״�� ���
*/

#include <stdio.h>
int main(){
    char input[1000000];    // �ܾ� ����
    int alpha[26]={0};          // ���ĺ� �� ����Ƚ��
    int k=0;
    int max=0;                  // ���� ���� ���� Ƚ��
    int maxi=0;                 // ���� ���� ���� ���ĺ��� ��ġ
    int is_maxnum_twice=0;      // ���� ���� ���� ���ĺ��� �� �ִ���?

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