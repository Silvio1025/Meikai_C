//对代码清单4-6进行修改，使其：
/* 
递减到1而非递减到0；
当输入的值小于0时，不进行换行。
 */

#include<stdio.h>

int main(void)
{
	int no;

	printf("请输入一个正整数：");
	scanf("%d", &no);

	while (no >= 1)
	{
		printf("%d  ", no--);
	}
	if (no < 0)
		putchar('\n');
        
	return 0;
}
