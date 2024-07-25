#include <stdio.h>
int main()
{
	int num = 0;
	while (num < 300000)
	{
		printf("=%d\n", num);
		num++;
	}
	if (num == 300000);
	{
		printf("%d=300000\n", num);
	}
	return 0;
}