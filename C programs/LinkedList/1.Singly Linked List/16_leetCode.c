#include<stdio.h>
#include<stdlib.h>

struct node{
       int val;
       struct node *next;
};

struct node *end_insertion(struct node *head , int data){
       struct node *ptr ,*temp;
       ptr = head;

       temp = malloc(sizeof(struct node));
       temp->val = data;
       temp->next = NULL;
       
       ptr->next = temp;
       return temp;
       
}

int pairSum(struct node* head)
{
    struct node *ptr1 = head;
    struct node *ptr2 = head;
    
    int count = 1;
    while(ptr1->next != NULL)
    {
        ptr1 = ptr1->next;
        count++;
    }
    
    int sum = ptr1->val + head->val;
    ptr1 = head;
    
    int i = 1;
    
    while(i < count/2)
    {
        
        int length = count - i + 1;
    
        while(i != 0 && ptr1->next != NULL)
        {
            ptr1 = ptr1->next;
            i--;
        }
    
        while(length != 0 && ptr2->next != NULL)
        {
            ptr2 = ptr2->next;
            length--;
        }
        
        int sum2 = ptr1->val + ptr2->val;
        
        if(sum2 > sum)
        {
            sum = sum2;
        }
        i++;
        
    }
    return sum;
}

int main(){
       struct node *head = malloc(sizeof(struct node));
       head->val = 5;
       head->next = NULL;

       struct node *ptr = head;

       ptr = end_insertion(ptr,47);
       ptr = end_insertion(ptr,22);
       ptr = end_insertion(ptr,81);
       ptr = end_insertion(ptr,46);
       ptr = end_insertion(ptr,94);
       ptr = end_insertion(ptr,1000);
       ptr = end_insertion(ptr,90);
       ptr = end_insertion(ptr,23);
       ptr = end_insertion(ptr,45);
       ptr = end_insertion(ptr,23);
       ptr = end_insertion(ptr,56);
       ptr = end_insertion(ptr,67);
       ptr = end_insertion(ptr,34);
       ptr = end_insertion(ptr,89);
       ptr = end_insertion(ptr,10);
       ptr = end_insertion(ptr,75);
       ptr = end_insertion(ptr,94);
       ptr = end_insertion(ptr,74);
       ptr = end_insertion(ptr,75);
       ptr = end_insertion(ptr,94);
       ptr = end_insertion(ptr,30);
       ptr = end_insertion(ptr,40);
       ptr = end_insertion(ptr,47);

       int sum = pairSum(head);
       printf("%d",sum);
       
}