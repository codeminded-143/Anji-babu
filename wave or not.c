/* to find the given number is wave or not*/

#include<stdio.h>

int main()

{
	int n;
	
	scanf("%d",&n);
	
	int up = 0;
	int down = 0;
	int prev = n%10;
	n/=10;
	int pres = n%10;
	n/=10;
	
	if(prev>pres){
		up = 1;
	}else{
		down = 1;
	}
	
	int flage= 1;
	
	while(n)
	{
	 prev = pres;
	 pres = n%10;
	 n = n/10;
	 if(down == 1 && pres < prev){
	 	up =1;
	 	down = 0;
	 }else if( up == 1 && pres > prev){
	 	down = 1;
	 	up = 0;
	 }else{                   // it is the right code 
	 	flage = 0;
	 	break;
	 }	
	}
	
	if(flage == 1){
		printf("It is a wave.");
	}else{
		printf("It is not a wave.");
	}
	
}
