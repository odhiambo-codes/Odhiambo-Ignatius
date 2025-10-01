/*
Name: Ignatius Odhiambo Wandera
Reg No: PA106/G/28770/25
Description: Program to determine the eligibility of a student to sit for final exams
*/
#include<stdio.h>
//main function
int main(){
	
	//variable declation
	float attendance,average_marks;
	
	//prompt user to enter average_marks
	printf("Enter the average_marks\t");
	scanf("%f" ,&average_marks);
	
	//prompt user to enter average marks
	printf("Enter the attendance (in percentage)\t");
	scanf("%f" ,&attendance);
	
	if (attendance >=75 && average_marks>=40){
		printf("You are fully eligible to sit for the final exams");
	}
	else
	{
		printf("You are not eligible to sit for the exams,try again on the next semester");
	}
	
	return 0;
}