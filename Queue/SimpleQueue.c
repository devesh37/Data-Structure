#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Node;
struct Node
{
    int data;
    struct Node *next;
};
struct LinkedList
{
struct Node *head,*tail;
int count;
};
struct Node* createNewNode(int data)
{
    struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->next=NULL;
    newNode->data=data;
    return(newNode);
}
void initializeLinkedList(struct LinkedList *list)
{
    list->head=list->tail=NULL;
    list->count=0;
}
int insertAtEnd(struct LinkedList *list,int data)
{
     struct Node *node=createNewNode(data);
    if(node==NULL)
    {
        printf("Memory error");
        return 0;
    }
    (list->count)++;
    if(list->head==NULL)
    {
    list->head=list->tail=node;
    }
    else{
    list->tail->next=node;
    list->tail=node;
    }
    return 1;
}
int deleteFromFront(struct LinkedList *list)
{
    if(list->head==NULL)
    {
        printf("Linklist is empty!\n");
        return(0);
    }
    int data=list->head->data;
    struct Node *ptr=list->head;
    list->head=list->head->next;
    free(ptr);
    (list->count)--;
    return(data);
}
void printList(struct LinkedList *list)
{
struct Node *ptr=list->head;
while(ptr!=NULL)
{
    printf("%d |",ptr->data);
    ptr=ptr->next;
}
printf("\n");
}
struct Queue{
struct LinkedList *list;
int isEmpty;
};
void initializeQueue(struct Queue *q)
{
    struct LinkedList *l=(struct LinkedList*)malloc(sizeof(struct LinkedList));
    initializeLinkedList(l);
    q->list=l;
    q->isEmpty=1;
}
int enque(struct Queue *q,int data)
{
    if(!insertAtEnd((q->list),data))
    {
      return(0);
    }
    else
    {
        q->isEmpty=q->list->count;
        return(1);
    }
}
int deque(struct Queue *q)
{
    int data=deleteFromFront(q->list);
    q->isEmpty=q->list->count;
    return(data);
}
int main()
{   struct Queue *q=(struct Queue*)malloc(sizeof(struct Queue));
    initializeQueue(q);
    enque(q,1);
    enque(q,2);
    enque(q,3);
    printList(q->list);
    deque(q);
    printList(q->list);
    deque(q);
    enque(q,5);
    printList(q->list);
    deque(q);
    printList(q->list);
    deque(q);
    printList(q->list);
    deque(q);
    printList(q->list);

    return 0;
}
