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

int calcmenu()
{
    printf("*************************\n");
    printf("1. Sum of two numbers.\n");
    printf("2. Multiplication of two numbers.\n");
    printf("3. Subtraction of two numbers.\n");
    printf("4. Division of two numbers.\n");
    printf("5. Sqaure of a number.\n");
}

int calcfun(int x)
{
        int a, b;
        switch (x)
        {
        case 1:
            printf("Enter 1st number: ");
            scanf("%d", &a);
            printf("Enter 2nd number: ");
            scanf("%d", &b);
            printf("*************************\n");
            printf("The sum of %d and %d is %d\n", a, b, a + b);
            break;
        case 2:
            printf("Enter 1st number: ");
            scanf("%d", &a);
            printf("Enter 2nd number: ");
            scanf("%d", &b);
            printf("*************************\n");
            printf("The multiplication of %d and %d is %d\n", a, b, a * b);
            break;
        case 3:
            printf("Enter 1st number: ");
            scanf("%d", &a);
            printf("Enter 2nd number: ");
            scanf("%d", &b);
            printf("*************************\n");
            printf("The subtraction of %d and %d is %d\n", a, b, a - b);
            break;
        case 4:
            printf("Enter 1st number: ");
            scanf("%d", &a);
            printf("Enter 2nd number: ");
            scanf("%d", &b);
            printf("*************************\n");
            printf("The division of %d and %d is %d\n", a, b, a / b);
            break;
        case 5:
            printf("Enter a number: ");
            scanf("%d", &a);
            printf("*************************\n");
            printf("The square of %d is %d\n", a, a * a);
            break;
        case 6:
            printf("EXIT\n");
            break;
        default:
            printf("INVALID\n");
            break;
        }
}

int arrfun(int x)
{
    int i, size, archoice, count = 0;
    do
    {
        switch (x)
        {
        case 1:
            printf("Enter length of array: ");
            scanf("%d", &size);
            int arr[size];

            for (i = 0; i < size; i++)
            {
                printf("Enter value for index [%d]: ", i);
                scanf("%d", &arr[i]);
            }

            for (i = 0; i < size; i++)
            {
                printf("%d\t", arr[i]);
            }
            printf("\n");

            do
            {
                printf("1. DISPLAY ODD NUMBERS\n");
                printf("2. DISPLAY EVEN NUMBERS\n");
                printf("3. COUNT NEGATIVE INTEGERS\n");
                printf("4. EXIT\n");
                printf("Enter your choice: ");
                scanf("%d", &archoice);

                switch (archoice)
                {
                case 1:
                    for (i = 0; i < size; i++)
                    {
                        if (arr[i] % 2 != 0 && arr[i] > 0)
                        {
                            printf("%d\t", arr[i]);
                        }
                    }
                    printf("\n");
                    break;

                case 2:
                    for (i = 0; i < size; i++)
                    {
                        if (arr[i] % 2 == 0 && arr[i] > 0)
                        {
                            printf("%d\t", arr[i]);
                        }
                    }
                    printf("\n");
                    break;

                case 3:
                    for (i = 0; i < size; i++)
                    {
                        if (arr[i] < 0)
                        {
                            count += 1;
                        }
                    }
                    printf("%d numbers are negative!\n", count);
                    printf("\n");
                    break;

                case 4:
                    printf("EXITING...\n");
                    break;

                default:
                    printf("INVALID\n");
                    break;
                }
            } while (archoice != 4);
            break;
        }
    } while (archoice != 4);
}

int main()
{
    int choice;
    int calc_choice;
    int arr_choice;

    do
    {
        main_menu();
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            calcmenu();
            printf("Enter your choice: ");
            scanf("%d", &calc_choice);
            calcfun(calc_choice);
            break;
        case 2:
            printf("1. 1D ARRAY\n");
            printf("2. 2D ARRAY\n");
            printf("Enter your choice: ");
            scanf("%d", &arr_choice);

            arrfun(arr_choice);
            break;
        default:
            break;
        }
    } while (choice != 6);

    return 0;
}