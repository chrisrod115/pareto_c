#include <stdio.h>
int calc_app(int a, int b, char op) {
    switch(op) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            return a / b;
        default:
            printf("Invalid operator\n");
    }
}
int main() {
    int a, b;
    char op;
    printf("Enter number 1: ");
    scanf("%d", &a);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter number 2: ");
    scanf("%d", &b);
    printf("%d %c %d = %d\n", a, op, b, calc_app(a, b, op));
	return 0;
}
