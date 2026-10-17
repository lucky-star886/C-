#include<stdio.h>
int main()
{
    char a,b,c;
    scanf("%c%c%c",&a,&b,&c);
  /*
    %c读取单个字符 输入a得到a
    %d读取十进制数字输入a得到97
    同时大写字母与小写字母之前相差32 A+32=a
  */
    a=a-32;
    b=b-32;
    c=c-32;
    printf("%c%c%c",a,b,c);
    return 0;
}
