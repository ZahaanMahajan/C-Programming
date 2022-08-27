#include<stdio.h>
#include<stdlib.h>

struct node{
       int coefficient;
       int exponent;
       struct node *link;
};

struct node *insertInSortedList(struct node *head , int coeff , int expo){
       struct node *ptr;
       struct node *temp = malloc(sizeof(struct node));
       temp->exponent = expo;
       temp->coefficient = coeff;
       temp->link = NULL;

       if(head == NULL || expo > head->exponent){
              temp->link = head;
              head = temp;
       }
       else{
              ptr = head;
              while(ptr->link != NULL && ptr->link->exponent > expo)
                     ptr = ptr->link;
              
              temp->link = ptr->link;
              ptr->link = temp;
       }
       return head;
}

struct node *create(struct node *head){
       int i , n , expo , coeff;

       printf("Enter the number of terms : ");
       scanf("%d",&n);

       for(i=0; i<n; i++){

              printf("Enter the coefficient for term %d: ",i+1);
              scanf("%d",&coeff);
              
              printf("Enter the exponent for term %d: ",i+1);
              scanf("%d",&expo);

              head = insertInSortedList(head , coeff , expo);

       }
       return head;
}

void printPolynomial(struct node *head){
       if(head == NULL)
              printf("No Polynomial.");
       else{
              struct node *ptr = head;
              while(ptr != NULL){
                     printf("%dx^%d",ptr->coefficient,ptr->exponent);
                     ptr = ptr->link;
                     if(ptr != NULL)
                            printf(" + ");
                     else
                            printf("\n");
              }
       }
}

int main(){

       struct node *head = NULL;
       printf("Enter the Polynomial \n");
       head = create(head);
       printf("The required Polynomial is :  ");
       printPolynomial(head);
       return 0;

}