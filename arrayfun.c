#include <stdio.h>

int insert(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter value for element %d: ", i);
        scanf("%d", &arr[i]);
    }
}

int sum(int arr[], int size)
{
    int total = 0;

    for (int i = 0; i < size; i++)
    {
        total += arr[i];
    }

    return total;
}

int main()
{
    int length;

    printf("Enter length of array: ");
    scanf("%d", &length);
    int arr[length];

    insert(arr, length);
    printf("The sum of all the elements in the array = %d", sum(arr, length));

    return 0;
}