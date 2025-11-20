#include <stdio.h>

int main_menu()
{
    printf("*************************\n");
    printf("1. SIMPLE CALCULATOR\n");
    printf("2. ARRAYS \n");
    printf("3. CREATE PRIME\n");
    printf("4. CREATE ARMSTRONG\n");
    printf("5. CREATE PALIDROME\n");
    printf("6. EXIT\n");

    return 0;
}

int calc()
{
    printf("*************************\n");
    printf("1. Sum of two numbers.\n");
    printf("2. Multiplication of two numbers.\n");
    printf("3. Subtraction of two numbers.\n");
    printf("4. Division of two numbers.\n");
    printf("5. Sqaure of a number.\n");
}

int sum()
{
    int a, b;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    printf("*************************\n");
    printf("The sum of %d and %d is %d\n", a, b, a + b);
}

int mul()
{
    int a, b;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    printf("*************************\n");
    printf("The multiplication of %d and %d is %d\n", a, b, a * b);
}

int sub()
{
    int a, b;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    printf("*************************\n");
    printf("The subtraction of %d and %d is %d\n", a, b, a - b);
}

int div()
{
    int a, b;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    printf("*************************\n");
    printf("The division of %d and %d is %d\n", a, b, a / b);
}

int sqr(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("*************************\n");
    printf("The square of %d is %d\n",a,a*a);
}

int main()
{
    int choice;
    int calc_choice;

    do
    {
        main_menu();
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            calc();
            printf("Enter your choice: ");
            scanf("%d", &calc_choice);
            switch (calc_choice)
            {
            case 1:
                sum();
                break;
            case 2:
                mul();
                break;
            case 3:
                sub();
                break;
            case 4:
                div();
                break;
            case 5:
                sqr();
                break;
            default:
                printf("Invalid input!");
                break;
            }
            break;

        default:
            break;
        }
    } while (choice != 6);

    return 0;
}