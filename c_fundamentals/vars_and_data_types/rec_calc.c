#include <stdio.h>
int area_calc(int length, int width) {
    printf("Calculating the area of the rectangle...\n");
	return length * width;
}
int main() {
    int length = 0;
    int width = 0;

    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);
    
    int area = area_calc(length, width);
    printf("The area of the rectangle is: %d\n", area);

	return 0;
}
