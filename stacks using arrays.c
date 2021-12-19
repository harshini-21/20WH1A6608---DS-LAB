#include <stdio.h>
#define SIZE 5
int i, top = -1, stack[SIZE];
void push(int ele){
stack[++top] = ele;
}
int pop(){
return stack[top--];
}
void display(){
for(i = top; i > 0; i--)
    printf("%d\n", stack[i]);
}
int main(){
int ch, ele;
while(1){
printf("1 - push\n, 2 - pop\n, 3 - peek\n, 4 - display\n, 5 - exit\n");
printf("Enter your choice :");
scanf("%d", &ch);
switch(ch){
case - 1:
          if(top = SIZE - 1)
          printf("Stack Overflow");
          else{
          printf("Enter element to be inserted :");
          scanf("%d", &ele);
          push(ele);
          }
case - 2:
          if(top == -1)
          printf("Stack Overflow");
          else
          printf("Deleted element is %d", pop());
          break;
case - 3:
          if(top == -1)
          printf("Stack Underflow");
          else
          printf("top element is %d", peek());
          break;
          int peek();
case - 4:
          if(top == -1)
          printf("Stack Underflow");
          else
          display();
          break;
case - 5:
          exit(0);
}
}
}





