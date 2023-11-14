#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a=5,b=6;
    double c;
    c=(double)a/b;
    printf("%f\n",c);
    int d;
    d=(int)c;
    printf("%d",d);

    getchar();
    system("pause");
    return 0;
}