#include <stdio.h>
int main() {
    int age;
    int current_year;
    printf("Enter the current year: ");
    scanf("%d", &current_year);
    printf("Enter your age: ");
    scanf("%d", &age);	
    printf("Your birth year is %d", current_year - age);
    return 0;
}
