#include <stdio.h>
#include <stdlib.h>

int randomiser = 0;
int *arr;
void generate(int n)
{
    randomiser++;
    srand(n + randomiser);
    free(arr);
    arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        *(arr + i) = rand();
}
void swap(int *x, int *y)
{
    int t = (*x);
    (*x) = (*y);
    (*y) = t;
}
void heapifylarge(int arr[], int n, int i)
{
    int largest = i;   // Initialize largest as root
    int l = 2 * i + 1; // left = 2*i + 1
    int r = 2 * i + 2; // right = 2*i + 2

    if (l < n && arr[l] > arr[largest])
        largest = l;

    if (r < n && arr[r] > arr[largest])
        largest = r;

    if (largest != i)
    {
        swap(&arr[i], &arr[largest]);

        heapifylarge(arr, n, largest);
    }
}

void minheapSort(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        heapifylarge(arr, n, i);
    for (int i = n - 1; i >= 0; i--)
    {
        swap(&arr[0], &arr[i]);
        heapifylarge(arr, i, 0);
    }
}
void heapifysmall(int arr[], int n, int i)
{
    int smallest = i;  // Initialize smalles as root
    int l = 2 * i + 1; // left = 2*i + 1
    int r = 2 * i + 2; // right = 2*i + 2

    if (l < n && arr[l] < arr[smallest])
        smallest = l;

    if (r < n && arr[r] < arr[smallest])
        smallest = r;

    if (smallest != i)
    {
        swap(&arr[i], &arr[smallest]);

        heapifysmall(arr, n, smallest);
    }
}
void maxheapSort(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        heapifysmall(arr, n, i);

    for (int i = n - 1; i >= 0; i--)
    {
        swap(&arr[0], &arr[i]);

        heapifysmall(arr, i, 0);
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        printf("\n%d ", arr[i]);
    printf("\n");
}
void smallest(int arr[], int n)
{
    int small = arr[0];
    for (int i = 0; i < n; i++)
        if (small > arr[i])
            small = arr[i];
    printf("\nSmallest element is %d\n", small);
}
void sorting(int arr[], int n)
{
    int opt;
    printf("\n1.Max heap\n2.Min heap\nEnter your choice:");
    scanf("%d", &opt);
sorting:
    switch (opt)
    {
    case 1:
        maxheapSort(arr, n);
        break;
    case 2:
        minheapSort(arr, n);
        break;
    default:
        printf("\nEnter correct option.");
        goto sorting;
        break;
    }
}
void replace(int arr[], int n)
{
    int node, value;
    printf("\nEnter node:");
    scanf("%d", &node);
    printf("\nEnter value:");
    scanf("%d", &value);
    arr[node] = value;
    sorting(arr, n);
}
void insert(int arr[], int *n)
{
    int new;
    int size = (*n) + 1;
    int store = (int)malloc(size * sizeof(int));
    for (int i = 0; i < (*n); i++)
        *(store + i) = arr[i];
    printf("\nEnter new element:");
    scanf("%d", &new);
    *(store + size - 1) = new;
    generate(size);
    for (int i = 0; i < size; i++)
        arr[i] = *(store + i);
    *(n) = size;
    sorting(arr, *n);
}
int delete (int arr[], int *n)
{
    int node = -1, value;
    printf("\nEnter value to delete:");
    scanf("%d", &value);
    for (int i = 0; i < (*n); i++)
        if (arr[i] == value)
        {
            node = i;
            break;
        }
    if (node == -1)
    {
        printf("\nElement not found");
        return 1;
    }
    int store = (int)malloc(((*n) - 1) * sizeof(int));
    for (int i = 0, j = 0; i < (*n); i++)
        if (i != node)
        {
            *(store + j) = arr[i];
            j++;
        }
    generate((*n) - 1);
    *n = (*n) - 1;
    for (int i = 0; i < (*n); i++)
        arr[i] = *(store + i);
    sorting(arr, *n);
    return 0;
}
int main()
{
    int n, opt;
    arr = (int *)malloc(10000000 * sizeof(int));
    printf("\nEnter number of elements:");
    scanf("%d", &n);
    generate(n);
menu:
    printf("\n1.Generate\n2.Display\n3.Max-heap(Descending)\n4.Min-heap(ascending)\n5.time to sort random data in descending\n6.Time to sort descending from descending order\n7.Time to sort descending from ascending order\n8.Extract smallest\n9.Replace value\n10.Insert a new element\n11.Delete an element\n12.Exit\nEnter your choice:");
    scanf("%d", &opt);
    switch (opt)
    {
    case 1:
        printf("\nEnter number of elements:");
        scanf("%d", &n);
        generate(n);
        break;
    case 2:
        printArray(arr, n);
        break;
    case 3:
        maxheapSort(arr, n);
        break;
    case 4:
        minheapSort(arr, n);
        break;
    case 5:
        printf("Max Time complexity is N*Log(N)");
        break;
    case 6:
        printf("Max Time complexity is N*Log(N)");
        break;
    case 7:
        printf("Max Time complexity is N*Log(N)");
        break;

    case 8:
        smallest(arr, n);
        break;
    case 9:
        replace(arr, n);
        break;
    case 10:
        insert(arr, &n);
        break;
    case 11:
        delete (arr, &n);
        break;
    case 12:
        return 0;
        break;
    default:
        printf("\nWrong option entered.");
        break;
    }
    goto menu;
}