#include<stdio.h>
int main(){
struct node(){
int data;
struct node * link;
struct node * top = NULL, *current, *temp;
};
void push(int ele){
current = (struct node *)malloc(sizeof(struct node));
current -> data = ele;
current -> link = NULL;
if(top == NULL)
    current -> link = NULL;
else
    current -> link = top;
    top = current;
}
int ch, ele, ;
   while(1){
      printf("1 - push\n, 2 - pop\n, 3 - peek\n, 4 - display\n, 5 - exit\n");
      printf("Enter your choice :");
      scanf("%d", &ch);
      switch(ch){
      case 1:
         printf("Enter element :");
         scanf("%d", &ele);
         push(ele);
         break;
      case 2:
         printf("Deleted element is %d");
         pop();
         break;
      case 3:
         if(top == NULL)
         printf("Stack Underflow :");
         else
         printf("top most element is %d");
         peek();
         break;
      case 4:
         if(top == NULL)
         printf("Stack Underflow");
         else
         display();
         break;
      case 5:
         exit(0);
      }
   }
}
