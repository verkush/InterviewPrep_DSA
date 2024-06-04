#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

void genericSwap(void *num1, void *num2, uint8_t size)
{
    void *tempMem = malloc(size);

    memcpy(tempMem, num1, size);
    memcpy(num1, num2, size);
    memcpy(num2, tempMem, size);

    free(tempMem);
}

int main()
{
    int num1 = 5, num2 = 10;

    printf("Before swapping number 1 = %d and number 2 = %d\n", num1, num2);

    genericSwap(&num1, &num2, sizeof(int));

    printf("After swapping number 1 = %d and number 2 = %d\n", num1, num2);

}