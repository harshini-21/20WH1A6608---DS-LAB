
#include <stdio.h>

void binary_search(int [], int, int, int);
void bubble_sort(int [], int);

int main()
{
    int key, size, i;
    int arr[25];

    printf("Enter size of an array: ");
    scanf("%d", &size);
    printf("Enter elements :\n");
    for(i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    bubble_sort(arr, size);
    printf("\n");
    printf("Enter key to search\n");
    scanf("%d", &key);
    binary_search(arr, 0, size, key);

}

void bubble_sort(int arr[], int size)
{
    int temp, i, j;
    for (i = 0; i < size; i++)
    {
        for (j = i; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void binary_search(int arr[], int low, int high, int key)
{
    int mid;

    if (low > high)
    {
        printf("Key not found\n");
        return;
    }
    mid = (low + high) / 2;
    if (arr[mid] == key)
    {
        printf("Key found\n");
    }
    else if (arr[mid] > key)
    {
        binary_search(arr, low, mid - 1, key);
    }
    else if (arr[mid] < key)
    {
        binary_search(arr, mid + 1, high, key);
    }
}
