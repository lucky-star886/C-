#include <stdio.h>
int main()
{
    printf("\n");
    printf("%c", '\n');   // 此处的'\n'为特殊字符
    printf("%c", 10);// 10是换行的ASCII码值
    putchar(10);// 输出一个换行，等价于 : printf("\n");

    for(int i = 0; i < 10; i++)
        printf("%c", 'A');//此循环为输出10个A字符
    int a = 'A';
    char ch = 'a';
    // 字符char类型，存储的是其ASCII码值，可以与整数进行运算
    printf("%d %d\n", a, ch);   // 65 97
    printf("%c %c\n", a, ch);   // A a
    printf("%d %c\n", 'A', 'A' + 32);  // 65 a
    printf("Hello%cworld.\n", 32);    // 空格的ASCII是32
    printf("Hello%cworld.\n", 10);    // 换行的ASCII是10
    printf("%d %d\n", 0, '0');   // 0 48  '0'的ASCII是48
    // 字符的ASCII减去48就得到相应的数值
    char c = '7';
    printf("字符'%c'的ASCII：%d\n", c, c);
    int num = c - 48;
    printf("减去48之后，得到数值：%d", num);
    printf("%d %d %d\n", 010, 10, 0x10);  // 8 10 16
    // 0开头的整数表示8进制 ; 0x/0X为十六进制
    printf("%o %d %x\n", 10, 10, 10);  // 12 10 a
    // %o表示输出8进制，%x表示输出16进制
    return 0;
}