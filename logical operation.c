#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a=-1,b;
    printf("%d\n",!a);
    if(a>0&&a++>0)
    {
        printf("ok\n");
    }
    printf("%d\n",a);
    b=a>0||++a>-1;
    printf("%d\n",b);

    getchar();
    system("pause");
    return 0;
}