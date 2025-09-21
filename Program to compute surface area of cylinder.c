/*
Name:Ignatius odhiambo Wandera
Reg No:PA106/G/28770/25
Description: compute surface area of a cylinder
	Surface_area = 2*pi*radius*radius + 2*pi*radius*height
*/
#include<stdio.h>
//main function
int main(){
	
	//variable declaration
	float radius,height,surface_area;
	const float pi = 3.142159;
	
	//prompt user to enter radius
	printf("\nEnter radius(cm) :");
	scanf("%f" ,&radius);
	
	//prompt user to enter height
	printf("\nEnter height(cm) :");
	scanf("%f" ,&height);
	
	//compute Surface_area of cylinder
	surface_area= 2*pi * radius * radius + 2*pi * radius * height;
	
	//Display results
	printf("\nsurface area of cylinder is %.3f (cm)",surface_area);
	
	return 0;
	
}