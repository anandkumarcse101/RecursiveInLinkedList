//Recursive function in linked list
#include<stdio.h>
#include<stdlib.h>
struct Node
{

    int data;
    struct Node *next;
}*head=NULL;

void create(int A[],int size)
{
int i;
 struct Node *temp,*last;
 head=(struct Node*)malloc(sizeof(struct Node));
 head->data=A[0];
 head->next=NULL;
 last=head;
 for(i=1;i<size;i++)
 {
     temp=(struct Node*)malloc(sizeof(struct Node));
      temp->data=A[i];
      temp->next=NULL;
      last->next=temp;
      last=temp;
 }


}
void display(struct Node *p)
{   
if(p!=NULL)
{   display(p->next);
    printf("%d\n",p->data);
   
    
}

}
int main()
{
   int A[]={1,2,3,4,5,6,7,8,9,0};
  int size=sizeof(A)/sizeof(A[0]);
   create(A,size);
   display(head);
    return 0;
}
