#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i;
	clrscr();
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("%d ",i);
		}
	}
	getch();
}
