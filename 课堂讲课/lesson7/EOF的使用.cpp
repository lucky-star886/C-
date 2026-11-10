#include<stdio.h>
int main()
{
	int a,i,sum;
	while(scanf("%d",&a)!=EOF)
    /*EOF表示文件结束符
    输入值能一直被读取，直到输入结束为止*/
	{
		sum=0;
        /*有不同的值输入进去要让一个数值结束后重置sum来进行判断*/
		for(i=a;i!=0;i=i/10)
        //i必须需要赋值 不然i的值会一直是a的值，导致死循环 
		sum=sum*10+i%10;
		if(a==sum)
		puts("此数为回文数");
		else
		puts("此数不是回文数");
	}
	return 0;
}