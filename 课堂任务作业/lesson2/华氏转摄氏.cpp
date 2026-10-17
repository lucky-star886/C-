#include<stdio.h>
int main()
{
    int a;
    float c;
    scanf("%d",&a);
    c=(a-32)*5/9.0;
    printf("对应的摄氏温度为:%.1f",c);
    return 0;
}
