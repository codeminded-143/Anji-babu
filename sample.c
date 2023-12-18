#include<stdio.h>
float celcius(float faren){
	float cel=(faren - 32)*5.0/9.0;
	return cel;
}
int main()
{
	float cel,faren;
	printf("enter the temperature :");
	scanf("%f",&faren);
	cel=celcius(faren);
	printf("celcius :%f",cel);
}

