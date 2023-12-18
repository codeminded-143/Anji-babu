#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);	
	if(n <= 2){
	    printf("The pattern is not possible.");
	    return 0;
	}else{
	    
	}
	for(i = 1;i<=n;i++){		
		for(j =1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}  
   	for(i = n;i>0;i--){
	  // printf("*");
   		for(j =1;j<=(i-1);j++){
			printf("*");
		}printf("\n");
	   }
   
}
