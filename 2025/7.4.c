#include<stdio.h>
#define DONGGE_LEIMO
int main(void)
{ 
    printf("���'���'����:\nA.������ʺ\nB.���������乬\nC.ף�������ȷ����ߣ�ȫ�������������ó���\nD.����ȫ��\n");
    char a ;
    scanf_s("%c", &a);
    if( a == 'D'|| a=='d') {
		printf("��ȷ�ģ�\n");

    }
    else {
        printf("����ģ�\n��ȷ�𰸣�D\n");
    }
    getchar();
    getchar();



    return 0;
}