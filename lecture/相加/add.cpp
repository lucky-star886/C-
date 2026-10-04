#include<stdio.h>;
int add(int a, int b)
{
	return a + b;
}
int main()
{
	int result = add(5, 6);
	printf("5+6=%d\n", result);
	return 0;
}