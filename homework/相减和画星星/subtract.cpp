#include <stdio.h>
int subtract(int a,int b)
{
    return a-b;
}
int main()
{
    int result=subtract(5,3);
    printf("5-3=%d\n",result);
    return 0;
}