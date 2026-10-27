#include <stdio.h>

/*
switch(表达式){
    case 常量表达式1:
        语句1;
        break;
    case 常量表达式2:
        语句2;
        break;
    ...
    case 常量表达式n:
        语句n;
        break;
    default:
        语句n+1;
}
用法：拿表达式的值从上向下逐个与case后面的常量表达式的值进行相等比较，如果相等则执行后面的语句，遇到break结束；如果都不相等，则执行default，如果没有default，则什么都不执行；
如果执行的语句后面没有break，则直接执行下一个case后的语句，不再进行条件判断。
注意：case后面常量表达式的值不允许重复！
*/
int main()
{
    // 输入一个月份，输出该月有多少天？
    int  month;
    printf("请输入月份：");
    scanf("%d", &month);
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("31天\n");
            break;
        case 2:
            printf("28或29天\n");
            break;
        case 4: case 6: case 9: case 11:
            printf("30天\n");
            break;
        default:
            printf("输入的月份无效！\n");
    }
    return 0;
}