#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int array[size];
    srand(time(0));

    for (int i = 0; i < size; i++)
    {
        array[i] = rand() % 100;
    }
    printf("Array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", array[i]);
    }

    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + array[i];
    }
    int average;
    average = sum / size;

    printf("\nAverage of the array values: %d", average);

    return 0;
}
