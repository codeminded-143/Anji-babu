#include<stdio.h>

int main(){
	int e,o,n,n1;
	scanf("%d",&n);
    for(e = 0,o = 0; n>0 ;n = n/10)
	{
	    n1 = n%10;
		if(n1 % 2==0){
			e++;
		}else
		{
			o++;
		}
		
	}
	printf("Even : %d\nOdd : %d",e,o);
	
}



