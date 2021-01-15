/*
- �ܾ �־�����
- �ܾ ���ڷ� ��ȯ�Ѵ�
- ���ڸ� ���̾�� �Է��ϱ� ���� �ʿ��� �ð��� ���Ѵ�
- 1�� 2��, ���� �� ĭ�� 1�ʾ� �þ��.
- ex) 86824 = 9+7+9+3+5+3 = 36
*/
#include <stdio.h>

void alpha2num(char* alpha, int* num);

int main(){
    char alpha[15]={0};
    int num[15]={0};
    int dial_time=0;

    scanf("%s", alpha);

    alpha2num(alpha, num);

    for (int i=0; i<15; i++){
        if (num[i] != 0){
            dial_time += num[i]+1;
        }
    }

    printf("%d", dial_time);

    return 0;
}

void alpha2num(char* alpha, int* num){
    for(int i=0; i<15; i++){
        if (alpha[i]=='A' || alpha[i]=='B' || alpha[i]=='C'){
            num[i] = 2;
        }
        else if (alpha[i]=='D' || alpha[i]=='E' || alpha[i]=='F'){
            num[i] = 3;
        }
        else if (alpha[i]=='G' || alpha[i]=='H' || alpha[i]=='I'){
            num[i] = 4;
        }
        else if (alpha[i]=='J' || alpha[i]=='K' || alpha[i]=='L'){
            num[i] = 5;
        }
        else if (alpha[i]=='M' || alpha[i]=='N' || alpha[i]=='O'){
            num[i] = 6;
        }
        else if (alpha[i]=='P' || alpha[i]=='Q' || alpha[i]=='R' || alpha[i]=='S'){
            num[i] = 7;
        }
        else if (alpha[i]=='T' || alpha[i]=='U' || alpha[i]=='V'){
            num[i] = 8;
        }
        else if (alpha[i]=='W' || alpha[i]=='X' || alpha[i]=='Y' || alpha[i]=='Z'){
            num[i] = 9;
        }
        else{
            num[i] = 0;
        }
    }
}