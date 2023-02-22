#include<stdio.h>
main()
{
	float days,years,d_years,y_days;
	printf("Enter days convert in to years :");
	scanf("%f",&days);
	printf("Enter years convert in to days :");
	scanf("%f,",&years);
	
	d_years = years*365.25;
	y_days = days/365.25;
	
	printf("days in to years = %.3f\nyears in to days = %.3f",y_days,d_years);
	 
	}
