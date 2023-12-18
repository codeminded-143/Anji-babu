#include<stdio.h>

int main()
{
	int n,f=1,c=0;
	scanf("%d",&n);
	while(f <= n)
	{
		if(n%f == 0){
			c++;
		}
		f++;
	}
	if(c==2)
	{
		printf("prime");
	}
	else 
	{
		printf("not a prime");
	}
	
}
