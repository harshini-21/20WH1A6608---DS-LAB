#include <stdio.h>
int main(){
struct node{
int data;
struct node * link;
};
struct node * front = NULL, * rear = NULL, * current;
void enqueue{
current = (struct node *)malloc(sizeof(struct node));
printf("Enter current data");
scanf("%d", &current -> data);
current -> link = NULL;
if(front == NULL)
front = rear = current;
else{
rear -> link = current;
rear = current;
}
}

void dequeue(){
if(front == NULL)
printf("Queue is empty");
else if(front = rear){
printf("Deleted element %d", front -> data);
front = front -> link;
}
}
void display(){
if(front == NULL)
printf("Queue is empty");
else{
while(current != NULL){
printf("%d", current -> data);
current = current -> link;
}
}
}
}













}
