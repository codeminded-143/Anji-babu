#include<stdio.h>

int main(){
	
	long int n;
	int up=0,down=0,n1,n2;
	
	scanf("%ld",&n);
	
		n1 = n%10;
    	n/=10;
    	n2=n%10;
    	n/=10;
    	
    	if(n1<n2){
    		down++;
		}else{
			up++;
		}
    	
	
    while(n>0)
    {
    	n1 = n%10;
    	n/=10;
    	n2=n%10;
    	n/=10;
    	
    	if(n1<n2){
    		down++;
		}else if(n1>n2){
			up++;
		}else{
			n1 == n2;/* this code is having a trouble when treating 
			          with same num side by side*/
			break;
		}	
	}
	if(down==0 || up == 0){
		printf("WAVE");
	}else
	{
		printf("NOT A WAVE");
	}
}
