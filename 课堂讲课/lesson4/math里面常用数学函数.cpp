#include <stdio.h>
#include <math.h>   // 数学函数头文件，必须加

// sqrt(a)  给a开平方根，返回double
// pow(x,y) 求 x 的 y 次方，返回double
// fabs(b)  求小数的绝对值，返回double

int main()
{
    double f = sqrt(5);       // √5
    printf("%f\n", f);

    double f1 = pow(2, 3);    // 2的3次方，2³
    printf("%f\n", f1);

    double f2 = fabs(-2.1);   // -2.1 的绝对值
    printf("%f\n", f2);

    return 0;
}