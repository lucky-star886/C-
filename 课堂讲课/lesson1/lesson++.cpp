#include <stdio.h>
/*
scanf("格式控制列表", 地址列表); 取地址符: &
格式控制符与后面的地址列表一一对应
*/
int main()
{
    int a, b;
    printf("请输入两个整数: \n");
    scanf("%d%d", &a, &b); // 从左向右，按格式控制符的格式向地址空间中存放内容
    printf("%d + %d = %d\n", a, b, a + b);
    return 0;
}