#include <stdio.h>
int main()
{
    double f;
    printf("请输入一个数：");
    scanf("%lf", &f);  // 在输入时，double类型必须对应%lf
    printf("%f\n", f); // 输出时，double使用%f或%lf都可以

    // 如何输出一个\n
    printf("\\n");  // 两个\会输出一个\

    // 如何输出一对双引号？
    printf("\"\"");

    // 如何输出一个%
    printf("%.2f%%\n", 0.236 * 100); //连续两个%会输出一个%
    return 0;
}