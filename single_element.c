#include <stdio.h>

int insert(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter value for index %d: ", i);
        scanf("%d", &arr[i]);
    }
}

int single(int a,int arr[]){
    printf("The value at index %d is %d",a,arr[a]);
}

int main()
{
    int length;
    int index;

    printf("Enter length of array: ");
    scanf("%d", &length);
    int arr[length];

    insert(arr, length);
    printf("Enter which index value you want to print: ");
    scanf("%d",&index);
    single(index,arr);

    return 0;
}