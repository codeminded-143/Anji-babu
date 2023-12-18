// 2.write a function to find a given number is prime or not
// need to modify

#include<stdio.h>

void prime(int n,int count){
	int i;
	for(i = 1;i<=n;i++)
	{
		if(n%i == 0){
			count++;
		}else{
			i++;
		}
	}
	
	if(count == 2){
		printf("prime");
	}else{
		printf("not a prime");
	}
}

int main()
{
	int n,count = 0;
	scanf("%d",&n);
	prime(n,count);
	
	/*if(count == 2){
		printf("prime");
	}else{
		printf("not a prime");
	}*/
}
