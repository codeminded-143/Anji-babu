// to find the digits of number is in increasing or decreasing or mixed

#include<stdio.h>

int main()

{
	int n,inc = 0,dec = 0,n1,n2;
	scanf("%d",&n);
	
	while(n>9){
		int first = n%10;
		n=n/10;
		int second = n%10;
		if(first < second)dec++;
		if(second < first)inc++;
	}
	printf("%d %d\n",dec,inc);
		
	}

