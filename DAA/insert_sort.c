#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    int i, j, temp, swap = 0, comparison = 0;
    for (i = 0; i < n; i++)
        scanf("%d", &array[i]);
    for (i = 1; i < n; i++)
    {
        j = i;
        comparison++;
        while ((j > 0) && (array[j - 1] > array[j]))
        {
            
            if (array[j - 1] > array[j])
            {
                comparison++;
            }
            temp = array[j - 1];
            array[j - 1] = array[j];
            array[j] = temp;
            j--;
            swap++;
        }
    }
    printf("\nNo of swaps = %d", swap);
    printf("\nNo of comparisions  = %d", comparison);
    printf("\nSorted Array\n");
    for (i = 0; i < n; i++)
        printf("%d \n", array[i]);
    return 0;
}