//对代码清单4-7的程序进行修改。
/* 
从1开始递增；
输入的值小于0时不换行。
 */

#include<stdio.h>

int main(void)
{
	int i, no;

	printf("请输入一个正整数：");
	scanf("%d", &no);

	i = 1;
	while (i <= no)
	{
		printf("%d  ", i++);
	}
	if (no >= 0)
		putchar('\n');
        
	return 0;
}
