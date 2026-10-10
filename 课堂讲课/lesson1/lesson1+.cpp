#include <stdio.h>
#include<math.h>
//使用math.h头文件中的pow()函数计算2的4次方
/*
printf()用法
1. 里面只有一对儿双引号，printf("待输出的内容");
printf("Hello world.\n");
双引号中的内容原样输出，转义字符除外，转义字符：\n, \t, \b, ...
\n 表示换行，\t 表示横向调格
2. 两部分内容，前面包含格式控制符，后面有待输出内容列表
printf("%d\n", 3);
printf("%f\n", 3.0f);
printf("%lf\n", 3.0); 3.0默认是double类型，3.0f是float类型*
*小数比如3.0需要用lf来输出，若想用f输出，则需要在小数后面加上f，表示float类型
int -> %d, float -> %f, double -->%lf, char --> %c
int是整数，float是单精度浮点数，double是双精度浮点数，char是字符型
强调：前面格式控制符的个数与后面待输出内容一一对应；个数和类型都要对应
%md m表示输出数据所占的宽度，为正时靠右输出，左侧不足补空格，如果m小于输出数据的实际宽度，则m无效；m为负数，默认靠左，右侧...
%.nf或%m.nlf m和上面整数中的一样，但要注意，小数点占一个宽度
n 表示设置小数点的位数，可以单独设置，如：.2f 表示2位小数
*/
int main()
{
    int a=3, b=4;
    printf("%d+%d=%d\n", a, b, a+b);
    printf("%.2lf\n",pow(2,4));
// pow() 返回值是double类型，若想用float类型输出，则需要在小数后面加上f，表示float类型
    return 0;
}