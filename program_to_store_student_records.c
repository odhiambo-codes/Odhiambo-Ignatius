#include <stdio.h>

// (i) Define structure for student records
struct Student {
    char name[50];
    char reg_no[20];
    float marks;
};

int main() {
    FILE *fptr;
    struct Student s;

    // (ii) Open the binary file for reading
    fptr = fopen("results.dat", "ab");
    if (fptr == NULL) {
        printf("Error: Could not open results.dat file.\n");
        return 1;
    }

    printf("Student Examination Results \n\n");

    // (iii) Read and display student records
    while (fread(&s, sizeof(s), 1, fptr) == 1) {
        printf("Name: %s\n", s.name);
        printf("Registration No: %s\n", s.reg_no);
        printf("Total Marks: %.2f\n", s.marks);
        printf("\n");
    }

    fclose(fptr);
    return 0;
}
