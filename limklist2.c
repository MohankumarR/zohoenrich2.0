#include <stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node;
struct node
{
    int data;
    struct node *next;
}*head;
void create(int);
void search(int);
void display();
int main(void) {
	int n,key;
	scanf("%d",&n);
	create(n);
	//display();//
	scanf("%d",&key);
	search(key);
	return 0;
}
void create(int n)
{
    int i,d;
    struct node *temp,*t1;
    for(i=0;i<n;i++)
    {
        temp=(struct node *)malloc(sizeof(struct node));
        scanf("%d",&d);
        if(head==NULL)
        {
            temp ->data=d;
            temp ->next=NULL;
            head=temp;
            t1=temp;
        }
        else
        {
            temp ->data=d;
            temp ->next=NULL;
            t1 ->next=temp;
            t1=t1 ->next;
        }
    }
}
void search(int key)
{
    int count=0;
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL)
    {
        if(ptr ->data==key)
        {
            printf("%d\n",count);
        }
        ptr=ptr ->next;
        count++;
    }
}
void display()
{
    struct node *t;
    t=head;
    if(head==NULL)
    {
        printf("list is empty");
    }
    else
    {
        while(t!=NULL)
        {
            printf("%d",t ->data);
            t=t->next;
        }
    }
}
