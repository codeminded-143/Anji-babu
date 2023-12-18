#include<stdio.h>
int main()
{
	double s1,s2,s3,s4,s5,agg,per;
	printf("Enter the subject marks :");
	scanf("%lf %lf %lf %lf %lf",&s1,&s2,&s3,&s4,&s5);
	agg = s1+s2+s3+s4+s5;
	per = (s1+s2+s3+s4+s5)/500*100;
	printf("Aggregrate = %lf",agg);
	printf("percentage = %lf",per);
	return 0;
	}
