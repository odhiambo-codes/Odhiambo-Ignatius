/*
Name:Ignatius Odhiambo Wandera
Reg No:PA106/G/28770/25
Description:number_game
*/
#include <stdio.h>

int main() {
    int number;

    while (1) {  // infinite loop, will break when correct
        printf("Enter the number:\n");
        scanf("%d", &number);

        if (number > 14) {
            printf("Too high!\n");
        } 
        else if (number < 14) {
            printf("Too low!\n");
        } 
        else {
            printf("Congratulations!\n");
            break; // exit the loop
        }
    }

    return 0;
}
