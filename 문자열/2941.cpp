/*
- ũ�ξ�Ƽ�� ���ĺ��� 2��~3�ڷ� �����ȴ�
- �Էµ� ���ڿ� input���� i, i+1�� 2������ ũ�ξ�Ƽ�� ���ĺ��� �˻��ϰ�
- ������ ���ĺ��� �ִٸ� ���ĺ��� ����, i++
- 3������ ũ�ξ�Ƽ�� ���ĺ��� ������ ������� �˻�
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