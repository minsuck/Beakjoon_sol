/*
- �ö󰡴� A, �������� B, ���� ���� V, �ɸ��� ���� day�� �ʿ�
- ��ǥ ��ġ�� �ö󰡸� �� �̻� �������� ����
- �Է��� 5, 3, 100���� �޾��� ��, ���� ��ġ�� 95���� ũ�� ���� ������ ������ ����⿡ ������ �ȴ�.
- �׷��Ƿ� V-A�� ������ ���� ���� �� 1�� ���ϸ� �Ǵµ�,
- �̴� V-A / A-B�� ���� �� �ִ�.
- �ٵ� �̴� �Ҽ����� ���� �� �ִµ�, �� ���� �� 100���� �������� ���� �ƴ϶�
- 100�� �Ѿ�� ��� (ex 97 + 5 = 102)�̹Ƿ� �ø��� �ȴ�.
- ���������� �ø� ������ ���� ������� �ʰ� �Ҽ����� ���� �κк��� �� ���� �κ��� ũ�� +2�� �ߴ�.
*/
#include <stdio.h>
int main(){
    int A, B, V, day=0;
    int last_day;
    double last_location;

    scanf("%d %d %d", &A, &B, &V);

    last_location = (V-A)/((A-B)*1.0);
    last_day = (V-A)/(A-B);
    //printf("%d %d %d %d %g\n", A, B, V, last_day, last_location);

    if ((double)last_day < last_location)   day = last_day+2;
    else    day = last_day+1;

/*
    while (location < V){
        day++;
        location+=A;
        if (location>=V)   break;
        else location-=B;
    }                   �ð� �ʰ�!
*/

    printf("%d", day);

    return 0;
}