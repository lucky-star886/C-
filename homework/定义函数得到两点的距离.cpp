#include<stdio.h>
#include<math.h>
double dis(double x1,double y1,double x2,double y2)
{
	double dis;
	dis=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	return dis;
}
int main()
{
	double x1,x2,y1,y2;
	printf("请输入x1,y1,x2,y2\n");
	scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
	printf("两坐标点的距离为%.2lf",dis(x1,y1,x2,y2));
	printf("我的女孩 永远开心");
}