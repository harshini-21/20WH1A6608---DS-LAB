#include <stdio.h>
int main(){
int i, j, arr[20], num, key, count = 0;
printf("Enter the size of array : \n");
scanf("%d", &num);
printf("Enter the elements :");
for(i = 0; i < num; i++){
    scanf("%d", &arr[i]);
}
printf("Enter key element :");
scanf("%d", &key);
for(i = 0; i < num; i++){
    if(arr[i] == key){
        count = 1;
        break;
    }
}
if(count == 1)
    printf("Key element is present at position %d in array\n", i + 1);
else
    printf("Key element is %d is not present in the array\n");
}

