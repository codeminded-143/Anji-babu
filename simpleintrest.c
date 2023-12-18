// to find the simple interest.
float simple_intrest(int p,int t,int r){
	float intrest =(p*t*r)/100;
	return intrest;
}
int main()
{
	int principle,time,rate;
	float intrest;
	scanf("%d%d%d",&principle,&time,&rate);
	intrest=simple_intrest(principle,time,rate);
	printf("simple interest : %f",intrest);
}
