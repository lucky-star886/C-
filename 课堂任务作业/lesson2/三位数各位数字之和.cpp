#include<stdio.h>
int main()
{
    int n,a,b,c;
    scanf("%d",&n);
    a=n/100;
    b=n%100/10;// 只有整数是整除例如123/10=12 123/10.0=12.3
    c=n%10; //%是求余符号例12%10=2
    printf("%d",a+b+c);
    return 0;
}
