#include<stdio.h>
#include<conio.h>
void main()
{
 int a[20], i, n, key, low, high, mid;
 clrscr();
 printf("Enter the array elements :");
 for(i = 0; i < n; i++)
 {
  scanf("%d", &a[i]);
 }
 printf("Enter the key :");
 scanf("%d", &key);
 low = 0;
 high = n - 1;
 while(high >= low)
 {
  mid = (low + high) / 2;
  if(key == a[mid])
   break;
  else
  {
   if(key > a[mid])
    low = mid + 1;
   else
    high = mid - 1;
  }
 }
 if(key == a[mid])
  printf("key is found at location %d", mid + 1);
 else
  printf("key element is not found");
 getch();
}
