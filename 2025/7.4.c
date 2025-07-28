#include<stdio.h>
#define DONGGE_LEIMO
int main(void)
{ 
    printf("如何'解放'董哥:\nA.让他吃屎\nB.把他打入冷宫\nC.祝他排名比分数高，全家四万，永世不得超生\nD.以上全部\n");
    char a ;
    scanf_s("%c", &a);
    if( a == 'D'|| a=='d') {
		printf("正确的！\n");

    }
    else {
        printf("错误的！\n正确答案，D\n");
    }
    getchar();
    getchar();



    return 0;
}