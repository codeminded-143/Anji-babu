#include<stdio.h>
int main()
{
	int km;
	float m,cm,inches,feets;
	printf("Enter the number of kilometers :");
	scanf("%d",&km);
	m = km*1000;
	cm=km*100000;
	inches=km*39370.1;
	feets=km*3280.84;
	printf("meters = %f\ncentimeters = %f\ninche = %f\nfeet = %f",m,cm,inches,feets);
	return 0;
	
}
