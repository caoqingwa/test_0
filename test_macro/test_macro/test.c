#define  ADD(x,y) ((x)+(y))
#include <stdio.h>
int main()
{
	int x = 0;
	int y = 0;
	scanf_s("%d%d", &x, &y);
	printf("sum=%d", ADD(x,y));
	return 0;

}
//int main()
//{
//	printf("%d\n", 4*ADD(2, 3));
//	return 0;
//}