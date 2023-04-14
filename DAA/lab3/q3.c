#include <stdio.h>
#include <stdlib.h>
void even_to_odd(int arr[], int size)
{
    int j = 0;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] % 2 == 0 && arr[j] % 2 == 1)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
        else if (arr[j] % 2 == 0)
            j++;
    }
}
int main()
{
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int *arr = (int *)malloc(size * sizeof(int));
    printf("Enter elements in array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    even_to_odd(arr, size);
    printf("Arranged array is : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}