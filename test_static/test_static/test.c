#include <stdio.h>
//void func()
//{
//	int a = 1;
//	a++;
//	printf("%d", a);
//}
//int main()
//{
//	int b = 0;
//	while (b < 20)
//	{
//		func();
//		b++;
//	}
//	return 0;


void func()
{
	static int a = 1;
	a++;
	printf("%d ", a);
}
int main()
{
	int b = 0;
	while (b < 20)
	{
		func();
		b++;
	}
	return 0;
}