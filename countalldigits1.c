#include<stdio.h>

int main()

{
	int a=0,n;
	scanf("%d",&n);
	x:
		a++;
		n=n/10;
	if(n>0)
	goto x;
	printf("%d",a);
}
