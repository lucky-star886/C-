#include<stdio.h>

int main()
{
    // 定义字符变量a，用来存输入的字母
    char a;
    printf("请输入一个英文字母:");
    scanf("%c",&a);

    // 定义整型变量b，用来存放字母序号
    int b;
    // 判断是否为大写字母 A~Z
    if(a>='A'&&a<='Z')
    {
        // 'A'是第1位，所以减去'A'再加1
        b = a - 'A' + 1;
    }
    // 判断是否为小写字母 a~z
    else if(a>='a'&&a<='z')
    {
        // 'a'是第1位，减去'a'再加1
        b = a - 'a' + 1;
    }

    // 输出结果
    printf("%c是第%d位字母",a,b);
    return 0;
}