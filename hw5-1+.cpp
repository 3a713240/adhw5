#include <stdio.h>
#include <stdlib.h>



int main()
{
	int x,b,c=1,d=0;
	printf("�п�J�@�ӼƦr");
	scanf("%d",&x);
	printf("�K�i��=%o\r\n",x);
	printf("�Q���i��=%x\r\n",x);
	
	while(x!=0){
		b=x%2;
		x=x/2;
		d=d+b*c;
		c=c*10;
		
	
	}
	printf("�G�i��=%d",d);















}
