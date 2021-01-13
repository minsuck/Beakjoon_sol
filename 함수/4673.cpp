/*
- 33+3+3 = 39
- 39의 생성자는 33
- 생성자가 없는 숫자가 샐프 넘버
- 10000보다 작은 샐프 넘버를 출력
- 숫자가 3자리일 때, abc > 101a+11b+2c로 다음 수를 구할 수 있다.
- 1~10000을 출력하는데 abc조합으로 만들어지는 수를 제외한 수를 
    출력하면 셀프넘버를 출력하는것과 같다
- 크기가 10000인 배열을 만들고 0으로 초기화
- 만들 수 있는 수열을 모두 1이나 해당 수로 바꿔준다
- for문을 이용해 0인 부분만 출력
*/
#include <stdio.h>

void make_selfNum(int arr[]);

int main(){
    int arr[10000]={0,};

    make_selfNum(arr);  //만들 수 있는 수에 해당하는 값을 1로 바꾼다

    for (int i=1; i<10000; i++){
        if (arr[i] == 0)    printf("%d\n", i);
    }   //만들 수 있는 수=1, 샐프넘버=0이므로 0에 해당하는 수만 출력한다.
    

    return 0;
}

void make_selfNum(int arr[]){
    // 1의자리
    for (int a=1; a<10; a++){
        arr[2*a]=1;
    }
    //10의 자리
    for (int a=1; a<10; a++){
        for (int b=0; b<10; b++){
            arr[11*a+2*b]=1;
        }
    }
    //100의 자리
    for (int a=1; a<10; a++){
        for (int b=0; b<10; b++){
            for (int c=0; c<10; c++){
                arr[101*a+11*b+2*c]=1;
            }
        }
    }
    //1000의 자리
    for (int a=1; a<10; a++){
        for (int b=0; b<10; b++){
            for (int c=0; c<10; c++){
                for (int d=0; d<10; d++){
                    if (1001*a+101*b+11*c+2*d < 10000)
                        arr[1001*a+101*b+11*c+2*d]=1;
                }
            }
        }
    }
}