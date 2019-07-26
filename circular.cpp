#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
class cll
{
struct list
{
int data;
struct list *next;
}*head;
public:
typedef struct list node;
cll();
void create();
void insert();
void display();
int deletepos();
void insertatbeg();
void insertatmid();
void insertatend();
void search();
};
cll::cll()
{
head=NULL;
}
int main()
{
int ch,k,c;
cll obj;
do
{
cout<<"\n\tMAIN MENU\n";
cout<<"\n1.create\n2.display\n3.insert\n4.deletepos\n5.search\n6.exit\n";
cout<<"\nEnter your choice";
cin>>ch;
switch(ch)
{
case-1:obj.create();
break;
case-2:obj.display();
break;
case-3:obj.insert();
break;
case-4:k=obj.deletepos();
cout<<"\ndeleted element from list is:\n"<<k;
break;
case-5:obj.search();
break;
case-6:exit(0);
}
}while(ch>0&&ch<7);
}
void cll::create()
{
node *temp, *p;
temp=new node;
cout<<"Enter the element:\n";
cin>>temp->data;
if(head==NULL)
{
temp->next=temp;
head=temp;
}
else
{
p=head;
while(p->next!=head)
{
p=p->next;
}
temp->next=head;
p->next=temp;
}
}
void cll::insert()
{
int ch;
do
{
cout<<"\n1.insertatbeg\n2.insertatmid\n3.insertatend\n4.exit\n";
cout<<"Enter your choice\n";
cin>>ch;
switch(ch)
{
case-1:obj.insertatbeg();
break;
case-2:obj.insertatmid();
break;
case-3:obj.insertatend();
break;
case-4:exit(0);
}
void cll::insertatbeg()
{
node *temp,*p;
temp=new node;
cout<<"Enter insertion element:\n";
cin>>temp->data;
p=head;
while(p->next!=head)
p=p->next;
p->next=temp;
temp->next=head;
head=temp;
}
void cll::insertatmid()
{
node *temp,*p;
int key;
temp=new node;
cout<<"Enter the key element:\n";
cin>>key;
p=head;
while(p->next!=head)
{
if(p->data==key)
{
temp->next=p->next;
p->next=temp;
}
p=p->next;
}
}
void cll::insertatend()
{
node *temp,*p;
temp=new node;
cout<<"enter element:\n";
cin>>temp->data;
if(head==NULL)
{
temp->next=temp;
head=temp;
}
else
{
p=head;
while(p->next!=head)
{
p=p->next;
}
temp->next=head;
p->next=temp;
}
void cll::display()
{
node *q;
q=head;
cout<<"The elements in the list are:\n";
do
{
cout<<"->"<<q->data;
q=q->next;
}
while(q->next!=head);
}
int cll::deletepos()
{
node *p, *p1;
int pos,i,k;
cout<<"Enter the element position:\n";
cin>>pos;
p=head;
if(p->data==pos)
{
p1=p->next;
if(p1==p)
{
p=NULL;
head=p;
}
else
{
while(p->next!=head)
{
p=p->next;
}
p->next=p1;
head=p1;
}
else
{
while(p->next!=head)
{
if(p->next->data=key)
{
p1=p->next;
p->next=p1->next;
p1->next=NULL;
delete p1;
}
else
p=p->next;
}
}
cout<<"list is empty\n";
}
void cll::search()
{
int found=0,k;
node *p;
p=head;
cout<<"Enter the element you want to find\n";
cin>>k;
do
{
if(p->data==k)
{
found=1;
cout<<"Element found";
}
p=p->next;
}while(p!=head);
if(found==0)
{
cout<<"Element not found";
}
}
