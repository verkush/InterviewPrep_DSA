#include <stdio.h>
#include <stdlib.h>

#define SIZE 4

//function to find and return maximum value from given array.
int findMax(int *arr, int size)
{
    if(size <= 0)
    {
        return -1;
    }

    int maxGrade = arr[0];

    for(int i = 1; i < SIZE; i++)
    {
        if(arr[i] > maxGrade)
        {
            maxGrade = arr[i];
        }
    }

    return maxGrade;
}

int main()
{
    int grades[SIZE] = {80, 85, 72, 90};
    int maxGrade;

    maxGrade = findMax(grades, SIZE);

    printf("Maximum Grade in array = %d\n", maxGrade);

    return 0;
}