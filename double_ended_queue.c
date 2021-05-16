#include<stdio.h>
#include<stdlib.h>

typedef struct node{
int info;
struct node *next;

}node;

node *front=NULL;
node * rear=NULL;

void i_front(int ele){
node *ptr=(node *)malloc(sizeof(node));
ptr->info=ele;
if(front==NULL){
    ptr->next=NULL;
front=ptr;
rear=ptr;
}
else{
   ptr->next=front;
front=ptr;
}
}

void i_rear(int ele){

node *ptr=(node *)malloc(sizeof(node));
ptr->info=ele;
ptr->next=NULL;
if(front==NULL){
    front=ptr;
    rear=ptr;

}
else{
rear->next=ptr;
rear=ptr;
}
}
void del_front(){
if(front==NULL){
    printf("queue is empty\n");
}
else{
        if(front->next==NULL){
            front=NULL;
            rear=NULL;
        }
        else{
    front=front->next;
        }
}

}

void del_rear(){
if(front==NULL){
    printf("queue is empty\n");
}
else{

        node *temp;
        temp=front;
if(front==rear){
front=NULL;
rear=NULL;
}
else{
        while(temp->next!=rear){

            temp=temp->next;

        }

    printf("val is %d\n",temp->info);
   rear=temp;
   rear->next=NULL;

}
}

}
void display(){

node *temp;
temp=front;
if(front!=NULL){
printf("ELEMENTS:-\n");

while((temp->next)!=NULL){
    printf("%d ",temp->info);
    temp=temp->next;
}
printf("%d ",temp->info);
printf("\n");
}
else{
    printf("queue is empty\n");
}
}

void main(){
while(1){
    printf("enter 1 to insert at front\n");
    printf("enter 2 to insert at rear\n");
    printf("enter 3 to delete from front\n");
    printf("enter 4 to delete from rear\n");
    printf("enter 5 to display\n");
    printf("enter 6 to exit\n");
int ele;
    int choice;
    scanf("%d",&choice);
    switch(choice){
case 1:
    printf("enter element\n");
//int ele;
    scanf("%d",&ele);
    i_front(ele);
    break;
case 2:
    printf("enter element\n");
//int elem;
    scanf("%d",&ele);
    i_rear(ele);
    break;
case 3:
    del_front();
    break;
case 4:
    del_rear();
    break;
case 5:
    display();
    break;
case 6:
    exit(1);

    }
}

}
