#include<stdio.h>
main()
{
	float r,w,l,b,h,area_of_circle, area_of_rectangle, area_of_triangle;
	 printf("Enter Redius of circle\n");
	 scanf("%f",&r);
	 
	 area_of_circle = 3.141*r*r;
	 printf("Area Of Circle is : %0.3f\n",area_of_circle);
	 
	 printf("Enter Length of rectangle\n");
	 scanf("%f",&l);
	 printf("Enter Width of rectangle\n");
	 scanf("%f",&w);
	 
	 area_of_rectangle = l*w;
	 printf("Area Of Rectangle is : %0.3f\n",area_of_rectangle);
	 
	 printf("Enter Base of triangle\n");
	 scanf("%f",&b);
	 printf("Enter Higth of triangle\n");
	 scanf("%f",&h);
	 
	 area_of_triangle = (h*b)/2;
	 printf("Area Of Triangle is : %0.3f\n",area_of_triangle);
	
}

