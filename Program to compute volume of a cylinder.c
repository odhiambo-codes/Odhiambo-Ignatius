/*
Name: Ignatius Odhiambo Wandera
Reg No: PA106/G/28770/25
Description: Program to compute volume of a cylinder
*/

#include <stdio.h>

int main() {
    // Variable declaration
    float radius, height, volume;
    const float pi = 3.14159;

    // Prompt user to enter radius
    printf("\nEnter radius (cm): ");
    scanf("%f", &radius);

    // Prompt user to enter height
    printf("\nEnter height (cm): ");
    scanf("%f", &height);

    // Compute volume
    volume = pi * radius * radius * height;

    // Display result
    printf("\nVolume of the cylinder is %.2f cm\n", volume);

    return 0;
}