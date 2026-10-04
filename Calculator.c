#include <stdio.h>

int main()
{
    char operator;
    float num1, num2, result;

    printf("=========================\n");
    printf("     CALCULATOR    \n");
    printf("=========================\n");
    printf("Supported operations: +, -, *, /\n");

    while (1)
    {
        printf("\nEnter operator (+, -, *, /) or 'q' to quit: ");
        scanf(" %c", &operator);

        // If user wants to exit
        if (operator == 'q' || operator == 'Q')
        {
            printf("Exiting calculator Thankyou for using!\n");
            break;
        }

        // Checking for valid operator
        if (operator != '+' && operator != '-' && operator != '*' && operator != '/')
        {
            printf("Error: Invalid operator! Please use +, -, *, or /.\n");
            continue;
        }

        printf("Enter two numbers (separated by a space): ");
        if (scanf("%f %f", &num1, &num2) != 2)
        {
            printf("Error: Invalid input. Please enter valid numbers.\n");
            // Clear input buffer to prevent infinite loops on bad input
            while (getchar() != '\n')
                ;
            continue;
        }

        // Performing calculation using switch-case
        switch (operator)
        {
        case '+':
            result = num1 + num2;
            printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
            break;
        case '/':
            if (num2 == 0.0f)
            {
                printf("Error: Division by zero is not allowed!\n");
            }
            else
            {
                result = num1 / num2;
                printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
            }
            break;
        }
    }

    return 0;
}