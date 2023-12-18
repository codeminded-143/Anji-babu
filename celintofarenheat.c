#include<stdio.h>
float faren_heat(float cel){
	float faren= (cel*(9.0/5.0))+32;
	return faren;
}

int main()
{
	float cel,faren;
	printf("enter the temperature :");
	scanf("%f",&cel);
	faren=faren_heat(cel);
	printf("farenheat :%f",faren);
}

