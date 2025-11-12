#include <stdio.h>

int sum(int a, int b);
int mul(int a, int b);
int sub(int a, int b);
int div(int a, int b);
int square(int a, int b);
int circle(int a);
int prime(int a);
int oddeve(int a);
int arr();
int arr2();

int main()
{
    int c, d, a, b, choice;
    do
    {
        printf("*****************\n");
        printf("1) Sum/Mult/Sub/Div of two integers\n");
        printf("2) Find Area of Square\n");
        printf("3) Find Area of Circle\n");
        printf("4) Check if a number is prime or not\n");
        printf("5) Check if number is Odd/Even\n");
        printf("6) Create a array\n");
        printf("7) EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &c);

        switch (c)
        {
        case 1:
            printf("Enter value of a: ");
            scanf("%d", &a);
            printf("Enter value of b: ");
            scanf("%d", &b);
            printf("1) Sum\n");
            printf("2) Multiply\n");
            printf("3) Subtract\n");
            printf("4) Division\n");
            printf("Enter what do you want: ");
            scanf("%d", &d);

            if (d == 1)
            {
                sum(a, b);
                break;
            }
            else if (d == 2)
            {
                mul(a, b);
                break;
            }
            else if (d == 3)
            {
                sub(a, b);
                break;
            }
            else if (d == 4)
            {
                div(a, b);
            }
            break;
        case 2:
            printf("Enter length: ");
            scanf("%d", &a);
            printf("Enter breadth: ");
            scanf("%d", &b);
            square(a, b);
            break;
        case 3:
            printf("Enter radius: ");
            scanf("%d", &a);
            circle(a);
            break;
        case 4:
            printf("Enter a number: ");
            scanf("%d", &a);
            prime(a);
            break;
        case 5:
            printf("Enter a number: ");
            scanf("%d", &a);
            oddeve(a);
            break;
        case 6:
            printf("Enter 1 for One dimensional array.\n");
            printf("Enter 2 for Two dimensional array.\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);
            if (choice == 1)
            {
                arr();
            }
            else
            {
                arr2();
            }
            break;
        case 7:
            printf("THANK YOU!");
            break;

        default:
            printf("***Please enter a correct value***\n");
            break;
        }
    } while (c != 7);
    return 0;
}

int sum(int a, int b)
{
    int result;
    result = a + b;
    printf("*****************\n");
    printf("The sum of %d and %d is %d\n", a, b, result);
}

int mul(int a, int b)
{
    int result;
    result = a * b;
    printf("*****************\n");
    printf("The multiplication of %d and %d is %d\n", a, b, result);
}

int sub(int a, int b)
{
    int result;
    result = a - b;
    printf("*****************\n");
    printf("The subtraction of %d and %d is %d\n", a, b, result);
}

int div(int a, int b)
{
    int result;
    result = a / b;
    printf("*****************\n");
    printf("The division of %d and %d is %d\n", a, b, result);
}

int square(int a, int b)
{
    int result;
    result = a * b;
    printf("*****************\n");
    printf("The Area of square of length %d cm and breadth %d cm is %d cm\n", a, b, result);
}

int circle(int a)
{
    float pi = 3.14;
    float result;
    result = pi * a * a;
    printf("*****************\n");
    printf("The Area of circle of radius %d is %.2f\n\n", a, result);
}

int prime(int a)
{
    int i, fl = 0;
    for (i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            fl = 1;
        }
    }
    if (fl == 0)
    {
        printf("Number is Prime\n\n");
    }
    else
    {
        printf("Number is not prime\n\n");
    }
}

int oddeve(int a)
{
    if (a % 2 == 0)
    {
        printf("%d is Even\n\n", a);
    }
    else
    {
        printf("%d is Odd\n\n", a);
    }
}

int arr()
{
    int i, j, n;
    printf("Enter the length of array: ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter value for index %d: ", i);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

int arr2()
{
    int i, j, rows, columns;
    printf("Enter the length of rows: ");
    scanf("%d", &rows);
    printf("Enter the length of columns: ");
    scanf("%d", &columns);
    int arr[rows][columns];
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("Enter value for row [%d] and column [%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}