/***************************************************************************
输出结果：
a=4b178970, a+1=4b178978
&a[0]=4b178970, &a[0]+1=4b178978
a[0]=4b178970,a[0]+1=4b178974
***************************************************************************/
#include<stdio.h>

int main(void)
{
	int a[2][2]={1,2,3,4};
	printf("a=%x, a+1=%x\n",a,a+1);
	printf("&a[0]=%x, &a[0]+1=%x\n",&a[0],&a[0]+1);
	printf("a[0]=%x,a[0]+1=%x\n",a[0],a[0]+1);
	return 0;
}

