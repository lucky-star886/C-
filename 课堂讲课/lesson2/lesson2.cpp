#include <stdio.h>
int main()
{
    printf("%.2f\n", 1.0 / 3);
    // 如果两侧都是整数，表示整除运算；如果有一侧是小数，表示数学运算
    // 小数默认是double类型，添加后缀f结尾明确表示是float类型
    float a = 3.21f;
    return 0;
}