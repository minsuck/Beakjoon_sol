/*
- ���� �Է¹ޱ�
- �ܾ� �ܾ� �ܾ� �ܾ� �ܾ�
- ������ �����ؼ� ������ ���� ����
- �� ���ڿ��� ��� 0
- ù ���ڰ� ������ �ƴϰ� �� ���ڿ��� �ƴ� ��� word++
- �� �������� ������ ���� �� ���� ���� �� �ڸ��� �˻��� ���ڸ� word++
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