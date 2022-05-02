#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head;


//Insert at begning
void beginsert();

//Insert at Last
void lastinsert();

//Insert at specific location
void randominsert();



void main(){

    beginsert();
    lastinsert();
    randominsert();


}

//Insert at begning
void beginsert(){
    struct node *ptr;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node *));
    if(ptr == NULL){
        printf("\nOVERFLOW");
    }
    else{
        printf("\nEnter Value : ");
        scanf("%d",&item);
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        printf("\nNode Inserted");
    }
}

//Insert at Last
void lastinsert(){
    //printf("Insertion at end of the list\n");
    struct node *ptr,*temp;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node *));
    if(ptr == NULL){
        printf("\nOVERFLOW");
    }
    else{
        printf("\nEnter Value : ");
        scanf("%d",&item);
        ptr->data = item;
        if(head == NULL){
            ptr->next = head;
            head = ptr;
            printf("\nNode Inserted");
        }
        else{
            temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
        temp->next = ptr;
        ptr->next = NULL;
        printf("\nNode Inserted");
        }
    }
}

//Insert at specific location
void randominsert(){
    printf("\nInsertion after specified node\n");
}
