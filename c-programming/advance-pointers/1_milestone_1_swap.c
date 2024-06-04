#include <stdio.h>
#include <stdlib.h>

void Swap(int *num1, int *num2);

void Swap(int *num1, int *num2)
{
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main()
{
    int num1, num2;
    printf("Enter Number 1: ");
    scanf("%d", &num1);
    printf("\nEnter Number 2: ");
    scanf("%d", &num2);

    printf("Before swapping number 1 = %d and number 2 = %d\n", num1, num2);

    Swap(&num1, &num2);

    printf("After swapping number 1 = %d and number 2 = %d\n", num1, num2);


    return 0;
}