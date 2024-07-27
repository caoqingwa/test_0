//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	printf("%d", a);
//	return 0;
//
//}
#include <stdio.h>
int main()
{
	int a = 10;
	int* pa = &a;
	*pa = 20;
	printf("%p", a);//%p:µØÖ·
	return 0;
}