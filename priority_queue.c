#include<stdio.h>
#include<stdlib.h>

typedef struct node{
int info;
int priority;
struct node *next;

}node;

node *front=NULL;
node *rear=NULL;

void enqueue(int ele, int priority){
node *ptr= (node *)malloc(sizeof(node));
ptr->info=ele;
ptr->priority=priority;
ptr->next=NULL;
if(front==NULL){
    front=ptr;

}
else{
        if(priority>front->priority)
        {
            ptr->next=front;
            front=ptr;

        }
        else{
    node *temp;
temp=front;
while((temp->next)->priority>=priority && temp->next!=NULL){
temp=temp->next;


}
    //printf("temp is %d\n",temp->info);
ptr->next=(temp->next);
temp->next=ptr;
        }

}


}

void dequeue(){
if(front==NULL){
    printf("queue underflow\n");
}
else{
    front=front->next;
}
}

void display(){
node *temp;
temp=front;
printf("ELEMENTS:-\n");

while((temp->next)!=NULL){
    printf("%d ",temp->info);
    temp=temp->next;
}
printf("%d ",temp->info);
printf("\n");

temp=front;
printf("AND THEIR PRIORITY:-\n");
while((temp->next)!=NULL){
    printf("%d ",temp->priority);
    temp=temp->next;
}
printf("%d ",temp->priority);
printf("\n");
}
void main(){
while(1){

    printf("enter 1 to enqueue\n");
    printf("enter 2 to dequeue\n");
    printf("enter 3 to display\n");
    printf("enter 4 to exit\n");

    int choice;
    scanf("%d",&choice);

    switch(choice){
case 1:
    printf("enter the element to be enqueued\n");
    int ele;
    scanf("%d",&ele);
    printf("enter its priority\n");
    int priority;
    scanf("%d",&priority);
    enqueue(ele,priority);
    break;
case 2:
    dequeue();
    break;
case 3:
    display();
    break;
case 4:
    exit(1);
    }
}

}
