#include<stdio.h>

int main()
{
    float units,u_c,cpu,b,sc,TA;
    scanf("%f",&u_c);
    if(u_c<=199.00)
    {
        units=u_c;
        cpu = 1.20;
        b = u_c*cpu;
        sc = 0.00;
        TA = b+sc;
        printf("Units Consumed: %.f\nCost per Unit: %.2f\nBill: %.2f\nSurcharge: %.2f\nTotal Amount: %.2f",units,cpu,b,sc,TA);
    }
    
    else if(u_c>=400.00 && u_c<600.00)
    {
        units=u_c;
        cpu = 1.60;
        b = u_c*cpu;
        sc = (b/400.00)*(15.0*4.0);
        TA = b+sc;
        printf("Units Consumed: %.f\nCost per Unit: %.2f\nBill: %.2f\nSurcharge: %.2f\nTotal Amount: %.2f",units,cpu,b,sc,TA);
    }
    else if(u_c>=600.00 && u_c<800.00)
    {
        units=u_c;
        cpu = 1.80;
        b = u_c*cpu;
        sc = (b/400.00)*(15.0*4.0);
        TA = b+sc;
        printf("Units Consumed: %.f\nCost per Unit: %.2f\nBill: %.2f\nSurcharge: %.2f\nTotal Amount: %.2f",units,cpu,b,sc,TA);
    }
    else if(u_c<=800.00)
    {
        units=u_c;
        cpu = 2.00;
        b = u_c*cpu;
        sc =(b/400.00)*(15.0*4.0);
        TA = b+sc;
        printf("Units Consumed: %.f\nCost per Unit: %.2f\nBill: %.2f\nSurcharge: %.2f\nTotal Amount: %.2f",units,cpu,b,sc,TA);
    }
    
}
