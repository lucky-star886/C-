 #include<stdio.h>
 #define g 10
 int main()
 {
 	float a,b,c;
 	printf("请输入高度(m)：\n");
 	scanf("%f",&a);
 	printf("请输入下落的时间（s）:\n");
 	scanf("%f",&b);
 	c=0.5*g*b*b;
 	float sum=a-c;
 	if (sum>=0)
	printf("物体在前%.2f秒内下落的垂直距离是：%.2f m,距离地面还有:%.2f m",b,c,sum);
	else
	printf("物体在前%.2f秒内下落的垂直距离是：%.2f m,距离地面还有0 m",b,a);
	return 0;
 }