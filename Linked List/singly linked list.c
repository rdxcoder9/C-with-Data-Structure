#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head;


//Insert at beginning
void beginsert();

//Insert at Last
void lastinsert();

//Insert at specific location
void randominsert();

//Display All Data
void display();

//Delete From
void begin_delete();

//Delete From Last
void last_delete();

void main(){

    /*beginsert();
    lastinsert();
    randominsert();
    display();*/

    int choice=0;
    while(choice!=9){
        printf("\n\n*********Main Menu*********\n");
        printf("\nChoose one option from the following list ...\n");
        printf("\n===============================================\n");
        printf("\n1.Insert in begining\n2.Insert at last\n3.Insert at any random location\n4.Delete from Beginning\n5.Delete from last\n6.Delete node after specified location\n7.Search for an element\n8.Show\n9.Exit\n");
        printf("\nEnter your choice?\n");
        scanf("\n%d",&choice);

        switch(choice){
    case 1:
        beginsert();
        break;
    case 2:
        lastinsert();
        break;
    case 3:
        randominsert();
        break;
    case 4:
        begin_delete();
        break;
    case 5:
        last_delete();
        break;
    case 6:
        printf("\nDelete\n");
        break;
    case 7:
        printf("\nSearch\n");
        break;
    case 8:
        display();
        break;
    case 9:
        exit(0);
        break;
    default:
        printf("Please Enter Valid Choice");

        }
    }
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
    struct node *ptr,*temp;
    int item,i,loc;
    ptr = (struct node *)malloc(sizeof(struct node *));
    if(ptr == NULL){
        printf("\nOVERFLOW");
    }
    else{
        printf("\nEnter Value : ");
        scanf("%d",&item);
        ptr->data = item;
        printf("\nEnter the location after which you want to insert ");
        scanf("\n%d",&loc);
        temp=head;
        for(i=0;i<loc;i++){
            temp = temp->next;
            if(temp == NULL){
                printf("\ncan't insert\n");
                return;
            }
        }
        ptr->next = temp->next;
        temp->next = ptr;
        printf("\nNode inserted");
    }
}

//Display Linked List Data
void display(){
struct node *temp;
temp = head;
if(temp==NULL){
    printf("Nothing to print");
}
else{
    printf("\nprinting values . . . . .\n");
    while(temp!=NULL){
    printf("%d\n",temp->data);
    temp=temp->next;
}
}
}

//Begin Delete
void begin_delete(){
    struct node *ptr;
    if(head == NULL){
        printf("\nList is Empty");
    }
    else{
        ptr = head;
        head = ptr->next;
        free(ptr);
        printf("\nNode deleted from the begining ...\n");
    }
}

//Last Delete
void last_delete(){
 struct node *ptr,*ptr1;
    if(head == NULL)
    {
        printf("\nlist is empty");
    }
    else if(head -> next == NULL)
    {
        head = NULL;
        free(head);
        printf("\nOnly node of the list deleted ...\n");
    }

    else
    {
        ptr = head;
        while(ptr->next != NULL)
        {
            ptr1 = ptr;
            ptr = ptr ->next;
        }
        ptr1->next = NULL;
        free(ptr);
        printf("\nDeleted Node from the last ...\n");
    }
}
