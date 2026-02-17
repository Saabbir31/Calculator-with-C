// Calculator program
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\t \t \t \t \t \t\033[1m         CALCULATOR\033[0m\n");
    printf("\t \t \t \t \t \t \t\033[1;32m Created By \n");
    printf("\t \t \t \t \t \t\033[1;32mMD. Sabbir Hossain Bulbul\n \t \t \t \t \t \tStudent_ID: 221-15-5816\033[0m\n");

    int menu;
    float num1, num2, result;
    while (1)   // Infinite loop to keep showing menu
    {
        printf("\n================ CALCULATOR MENU ================\n");
        printf("\nSelect an option:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("=================================================\n");

        printf("Enter your choice: ");
        scanf("%d", &menu);

        if (menu == 5)
        {
            printf("\033[1;31mExiting calculator. \n   Thank you. \n");
            break;
        }

        if (menu < 1 || menu > 5)
        {
            printf("\nInvalid choice. Please select 1-5.\n");
            continue;
        }

        printf("Enter first number: ");
        scanf("%f", &num1);

        printf("Enter second number: ");
        scanf("%f", &num2);

        switch (menu)
        {
        case 1:
            result = num1 + num2;
            printf("\n%.2f + %.2f = %.2f\n", num1, num2, result);
            break;

        case 2:
            result = num1 - num2;
            printf("\n%.2f - %.2f = %.2f\n", num1, num2, result);
            break;

        case 3:
            result = num1 * num2;
            printf("\n%.2f * %.2f = %.2f\n", num1, num2, result);
            break;

        case 4:
            if (num2 == 0)
            {
                printf("\nError: Division by zero is not allowed.\n");
            }
            else
            {
                result = num1 / num2;
                printf("\n%.2f / %.2f = %.2f\n", num1, num2, result);
            }
            break;
        }
    }

    return 0;
}
