/*
Name:Ignatius odhiambo Wandera
Reg No:PA106/G/28770/25
Description: compute surface area and volume of cylinder of a cylinder
	Surface_area = 2*pi*radius*radius + 2*pi*radius*height
*/
#include<stdio.h>
//main function
int main(){
	
	//variable declaration
	float radius,height,surface_area,volume;
	const float pi = 3.142159;
	
	//prompt user to enter radius
	printf("\nEnter radius(cm) :");
	scanf("%f" ,&radius);
	
	//prompt user to enter height
	printf("\nEnter height(cm) :");
	scanf("%f" ,&height);
	
	//compute Surface_area of cylinder
	surface_area= 2*pi * radius * radius + 2*pi * radius * height;
	volume=pi * radius * radius * height;
	
	//Display results
	printf("\nsurface area of cylinder is %.3f (cm^2)",surface_area);
	printf("\nThe volume of the cylinder is %.3f (cm^3)",volume);
	
	return 0;
	
}