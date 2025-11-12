#include <stdio.h>
#include <math.h>

int count_digits(int x)
{
    int original_num = x;
    int n = 0;
    while (original_num != 0)
    {
        original_num /= 10;
        n++;
    }
    return n;
}

int is_armstrong(int a, int b)
{
    int original_num = a;
    int remainder;
    double result = 0.0;
    while (original_num != 0)
    {
        remainder = original_num % 10;
        result = result + pow(remainder, b);
        original_num = original_num / 10;
    }
    return (int)result;
}

int main()
{
    int num, original_num, n = 0, remainder;
    int result;

    printf("Enter a number: ");
    if ((scanf("%d", &num) != 1))
    {
        printf("Invalid input!");
        return 0;
    }

    if (num < 0)
    {
        printf("Can't check Armstrong for negative integers\n");
        return 0;
    }
    // TO COUNT NUMBER OF DIGITS
    count_digits(num);
    // TO CHECK ARMSTRONG
    result = is_armstrong(num, count_digits(num));

    if (result == num)
    {
        printf("%d is Armstrong!", num);
    }
    else
    {
        printf("%d is Not Armstrong!", num);
    }
    return 0;
}