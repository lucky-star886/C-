#include <stdio.h>
int main()
{
    int a, b, c; // 存放两个运算数
    char op;     // 存储输入的运算符号

    scanf("%d%c%d", &a, &op, &b);
    switch (op)
    {
    case '+':
        c = a + b;
        break;
    case '-':
        c = a - b;
        break;
    case '*':
        c = a * b;
        break;
    case '/':
        if (b == 0) // 判断除数不能为0
        {
            puts("错误：除数不能为0！");
            return 1; // 异常退出程序
        }
        c = a / b;
        break;
    default:
        puts("该运算符暂不支持运算！");
        return 1;
        break;
    }
    printf("%d %c %d = %d\n", a, op, b, c);
    return 0;
}