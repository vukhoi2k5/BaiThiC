#include <stdio.h>
#include <stdlib.h>

int tinh_tong(int x, int y)
{
    return x + y;
}

float tinh_hieu(int x, int y)
{
    return (float)x - y;
}

int tinh_tich(int x, int y)
{
    return x * y;
}

float tinh_thuong(int x, int y)
{
    if (y != 0)
    {
        return (float)x / y;
    }
    else
    {
        printf("Error: Division by zero\n");
        return 0;
    }
}

int main()
{
    int choice, num1, num2;
    do
    {
        printf("\n\nCalculation Menu\n");
        printf("=======================\n");
        printf("1. Input Numbers\n");
        printf("2. Calculate Sum\n");
        printf("3. Calculate Subtraction\n");
        printf("4. Calculate Multiplication\n");
        printf("5. Calculate Division\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("\nEnter numbers 1: ");
                scanf("%d", &num1);
                printf("\nEnter numbers 2: ");
                scanf("%d", &num2);
                break;
            case 2:
                printf("\nSum of %d and %d is %d", num1, num2, tinh_tong(num1, num2));
                break;
            case 3:
                printf("\nSubtraction of %d and %d is %.2f", num1, num2, tinh_hieu(num1, num2));
                break;
            case 4:
                printf("\nMultiplication of %d and %d is %d", num1, num2, tinh_tich(num1, num2));
                break;
            case 5:
                printf("\nDivision of %d and %d is %.2f", num1, num2, tinh_thuong(num1, num2));
                break;
            case 6:
                exit(0);
            default:
                printf("\nInvalid choice!");
        }
    } while (choice != 6);
    return 0;
}
