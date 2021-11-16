#include <stdio.h>
int linear_search(int arr[], int size, int element) {
    int recursion;
    size--;

    if (size >= 0) {
        if (arr[size] == element)
            return size;
        else
            recursion = linear_search(arr, size, element);
    }
    else
        return -1;

    return recursion;
}

int main(void) {
    int arr[] = {12, 34, 54, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element = 54;
    int index;

    index = linear_search(arr, size, element);

    if (index != -1)
        printf("Element %d is present at index %d", element, index);
    else
        printf("Element %d is not present", element);

    return 0;
}
