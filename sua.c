//stacks using arrays
#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int top = -1,i,ele,stack[SIZE];
void push(int ele){
stack[++top] = ele;
}
int pop()
{
return(stack[top--]);
}
int peek(){
return(stack[top]);
}
int display(){
for(int i = top; i >= 0; i--)
printf("%d\n", stack[i]);
}
int main(){
int ch, ele;
while(1){
printf("\n 1.pull \n 2.pop \n 3.peak \n 4.display \n 5.exit");
printf("\n Enter your choice :");
scanf("%d", &ch);
switch(ch){

    case 1:

    if(top == SIZE - 1)
    printf("stack is full\n");
    else{
    printf("Enter element to be inserted\n");
    scanf("%d", &ele);
    push(ele);
    }
    break;

    case 2:

    if(top == -1)
    printf("stack is empty\n");
    else{
    printf("deleted element is %d", pop());
    }
    break;

    case 3:

    if(top == -1)
    printf("stack is full\n");
    else
    printf("top element is %d", peek());
    break;

    case 4:

    if(top == 1)
    printf("stack is empty\n");
    else{
    display();
    }
    break;

    case 5:

    exit(0);
    }
}
}
