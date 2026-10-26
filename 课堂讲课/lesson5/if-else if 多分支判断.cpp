#include <stdio.h>

/*
if(表达式1)
    语句1;
else if(表达式2)
    语句2;
...
else if(表达式n)
    语句n;
else  // 此else可有可无
    语句n+1;

用法：从上向下逐个判断条件表达式，遇到成立时执行后面相应的语句，如果都不成立，执行else语句；如果else没有，则什么都不执行！
说明：上面的多条件是互斥执行的，也就是说只能执行其中的一条！if与else if与else之间只能有一条语句！
考虑一个问题：后面的条件与前面有没有关系？？？
*/
int main()
{
    float s;
    printf("请输入你的考试成绩：");
    scanf("%f", &s);
    if(s < 0 || s > 100) // 不合法的成绩
        printf("考试成绩无效！\n");
    else
    {
        if(s >= 90 && s <= 100) // s <= 100可以省略
            printf("优秀\n");
        else if(s >= 80 && s < 90) // s < 90可以省略
            printf("良好\n");
        else if(s >= 70)
            printf("中等\n");
        else if(s >= 60)
            printf("及格\n");
        else if(s < 60) // 可以简化写作：else
            printf("不及格\n");
    }

    return 0;
}