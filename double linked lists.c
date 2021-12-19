#include <stdio.h>
int main(){
int ch, head, ele, tail, current, temp, position;
while(1){
  printf("1 - Create\n, 2 - insert at begin\n, 3 - insert at end\n, 4 - insert at position\n, 5 - delete at begin\n, 6 - delete at end\n, 7 - delete at position\n, 8 - traversal\n");
  scanf("%d",&ch);
  switch(ch){
    case 1:
         head = create();
         head = tail = current;
         break;
    case 2:
         scanf("%d", &ele);
         head = insert_begin(ele);
         head = current;
         break;
    case 3:
         head = insert_end(ele);
         scanf("%d", &ele);
         tail = current;
         break;
    case 4:
         printf("Enter position :");
         scanf("%d", &position);
         printf("Enter element :");
         scanf("%d", &ele);
         head = insert_position(position,ele);
         temp = head;
         break;
    case 5:
          head = delete_begin(head);
          temp = head;
          free(temp);
          break;
    case 6:
         head = delete_end(head);
         temp = tail;
         free(temp);
         break;
    case 7:
         scanf("%d", &position);
         head = delete_position(position);
         temp = head;
         free(temp);
         break;
    case 8:
          head = traverse(ele);
          scanf("%d", &ele);
          printf("Enter values of element :");
          scanf("%d", &ele);
          break;
   }
  }
}








