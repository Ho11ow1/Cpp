#include "src/hdr/main.h"

void calculator()
{
    char op;
    double num1;
    double num2;
    double result;

    printf("%s", "***********CALCULATOR ***********\n");

    printf("%s","Enter one of the 4 operators (+ - * /): ");
    scanf_s("%c", &op);

    printf("%s", "#Enter #1: ");
    scanf_s("%lf", &num1);

    printf("%s", "#Enter #2: ");
    scanf_s("%lf", &num2);

    switch (op)
    {
    case '+':
        result = num1 + num2;
        printf("%s %.3lf %s", "Result = ", result, "\n");
        break;
        
    case '-':
        result = num1 - num2;
        printf("%s %.3lf %s", "Result = ", result, "\n");
        break;
        
    case '*':
        result = num1 * num2;
        printf("%s %.3lf %s", "Result = ", result, "\n");
        break;

    case '/':
        result = num1 / num2;
        printf("%s %.3lf %s", "Result = ", result, "\n");
        break;

    default:
        printf("%s", "\nInvalid input entered\n");
        break;
    }

    std::cout << "********************************";
}
