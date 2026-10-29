#include<stdio.h>
#include<math.h>

int main()
{
    // 定义三边a,b,c、半周长p、面积s
    double a,b,c,s,p;
    printf("请输入三角形的三条边\n");
    scanf("%lf %lf %lf",&a,&b,&c);
    // 判断是否不能构成三角形：任意两边之和小于等于第三边
    if((a+b<=c)||(a+c<=b)||(b+c<=a))
    {
        printf("输入错误");
    }
    else
    {
        // 海伦公式第一步：求半周长 p = (a+b+c)/2
        p=(a+b+c)/2;
        // 海伦公式第二步：面积 s = √[p(p‑a)(p‑b)(p‑c)]
        s=sqrt(p*(p-a)*(p-b)*(p-c));
        printf("三角形的面积是%.2lf",s);
    }
    return 0;
}