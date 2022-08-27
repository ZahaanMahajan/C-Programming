
// For position greater than 1

#include<stdio.h>
#include<stdlib.h>

struct node{
       int data;
       struct node *link;
};

struct node *end_insertion(struct node *head,int data){
      struct node *ptr ,*temp;
      ptr = head;

      temp = malloc(sizeof(struct node));
      temp->data = data;
      temp->link = NULL;

      ptr->link = temp;
      return temp;

}

void del_pos(struct node *head, int pos){
       struct node *previous = head;
       struct node *current = head;

       while(pos != 2){
              previous = previous->link;
              pos--;
       }

       current = previous->link;
       previous->link = current->link;
       free(current);
       current = NULL;
}

int main()
{
       struct node *head = malloc(sizeof(struct node));
       head->data = 0;
       head->link = NULL;

       struct node *ptr = head;

       ptr = end_insertion(ptr,1);
       ptr = end_insertion(ptr,2);
       ptr = end_insertion(ptr,1234);
       ptr = end_insertion(ptr,3);
       ptr = end_insertion(ptr,4);

       int pos = 4; 
       del_pos(head,pos);

       ptr = head;
       while(ptr != NULL){
              printf("%d ", ptr->data);
              ptr = ptr->link;
       }
       return 0;
}