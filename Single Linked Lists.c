#include <stdio.h>
int main(){
int ch, head, ele, position;
while(1){
printf("1-create\n, 2-insert at begin\n, 3-insert at end\n, 4-insert at position\n, 5-delete at begin\n, 6-delete at end\n,7-delete at position\n, 8-traversal\n, 9-exit\n");
printf("Enter your choice :");
scanf("%d", &ch);
switch(ch){
case - 1: head = create();
          break;

case - 2: scanf("%d", &ele);
          head = insert_begin(ele);
          break;

case - 3: head = insert_end(ele);
          scanf("%d", &ele);
          break;

case - 4: printf("Enter position :");
          scanf("%d", &position);
          printf("Enter element :");
          scanf("%d", &ele);
          head = insert_position(position,ele);

case - 5: head = delete_begin(head);
          break;

case - 6: head = delete_end(head);
          break;

case - 7: scanf("%d", &position);
          head = delete_position(position);
          break;

case - 8: head = traverse(ele);
          scanf("%d", &ele);
          printf("Enter values of element :");
          scanf("%d", &ele);
          break;

case - 9: exit(0);

}
}
}
