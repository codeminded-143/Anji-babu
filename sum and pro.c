//sum of all even digits and pro of all odd digits

#include<stdio.h>

int main()

{
	int n,n1,sum = 0,pro = 1;
	
	scanf("%d",&n);
	
	for(;n > 0; n/=10){
		n1 = n%10;
		 if(n1 % 2 == 0){
		 	sum = sum + n1;
		 }else{
		 	pro = pro*n1;
		 }
	}
	printf("%d %d",sum,pro);
}
