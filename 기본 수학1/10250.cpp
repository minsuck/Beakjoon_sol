/*
- H, W, N �Է¹���
- N�� H�� ���� ���� ȣ��, �������� ����
- ������ ������ �ڱ� �ڽ��� �������� �����Ƿ�
- H=6�� �� 6���� 0���� ǥ����� �ʵ��� ����.
*/
#include <stdio.h>
int main(){
    int T, H, W, N;
    int floor, room;

    scanf("%d", &T);

    while (T>0){
        scanf("%d %d %d", &H, &W, &N);
        floor = N % H;
        room = N / H + 1;   //�Ϲ����� ��Ȳ

        if (floor==0){      //N�� H�� ������ ������ �� ����
           floor = H;
           room--;
        }

        printf("%d%02d\n", floor, room); //����� ���߱� ���� %02d
        T--;
    }

    return 0;
}