#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    return b != 0 ? a / b : 0;
}

int main() {
    int choice, a, b;
    int (*operation)(int, int);

    printf("Menu:\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    switch (choice) {
        case 1: operation = add; break;
        case 2: operation = subtract; break;
        case 3: operation = multiply; break;
        case 4: operation = divide; break;
        default: printf("Invalid choice\n"); return 1;
    }

    int result = operation(a, b);
    printf("Result: %d\n", result);

    return 0;
}
