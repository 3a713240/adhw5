#include <stdio.h>
#include <stdlib.h>



int main()
{
	int x,b,c=1,d=0;
	printf("請輸入一個數字");
	scanf("%d",&x);
	printf("八進位=%o\r\n",x);
	printf("十六進位=%x\r\n",x);
	
	while(x!=0){
		b=x%2;
		x=x/2;
		d=d+b*c;
		c=c*10;
		
	
	}
	printf("二進位=%d",d);















}
