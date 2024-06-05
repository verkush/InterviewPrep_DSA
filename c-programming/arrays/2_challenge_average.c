#include <stdio.h>
#include <stdlib.h>

#define SIZE 4

//function to return total sum of an array
int sumArray(int *arr, int size)
{
    int sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

//function to find and return maximum value from given array.
double findAverage(int *arr, int size)
{
    int totSum = sumArray(arr, size);

    double avgSum = totSum / (size * 1.0);

    return avgSum;
}

int main()
{
    int grades[SIZE] = {80, 85, 72, 90};
    double avgGrade;

    avgGrade = findAverage(grades, SIZE);

    printf("Maximum Grade in array = %.2lf\n", avgGrade);

    return 0;
}