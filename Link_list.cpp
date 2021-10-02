// wap to create a linked list with 5 elements and display it 
#include<iostream.h>
#include<conio.h>
#include<malloc.h>

struct Node
{
int info;
struct Node *link;
}*FIRST=NULL;
void main()
{
clrscr();
struct Node *n1,*n2,*n3,*n4,*n5
n1=(Node*)malloc(sizeof(struct Node));
n1->info=100;
n1->link=NULL;
FIRST=n1;
n2=(Node*)malloc(sizeof(struct Node));
n2->info=200;
n2->link=NULL;
n1->link=n2;
n3=(Node*)malloc(sizeof(struct Node));
n3->info=300;
n3->link=NULL;
n2->link=n3;
n4=new Node;
n4->info=400;
n4->link=NULL;
n3->link=n4;
n5=(Node*)malloc(sizeof(struct Node));
n5->info=500;
n5->link=NULL;
n4->link=n5;
cout<<"\nFIRST==>"<<n1->info<<"==>"<<n2->info<<"==>"<<n3->info<<"==>"<<n4->info<<"==>"<<n5->info<<"==>NULL";
struct Node *temp;
temp=FIRST;
while(temp!=NULL)
{
cout<<"\n"<<temp->info;
temp=temp->link;
}
getch();
}