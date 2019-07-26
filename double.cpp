#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
class d11
{
struct list
{
int data;
struct list *next;
struct list *pre;
}*head;
public:typedef struct list node;
d11();
void create();
void insert();
void display();
int deletepos();
void insertatbeg();
void insertatmid();
void insertatend();
void search();
};
d11::d11()
{
head=NULL;
}
int main()
{
int ch,c,k;
d11 obj;
do
{
cout<<"\nMAIN MENU\n";
cout<<"\n1.create\n2.display()\n3.insert()\n4.deletepos()\n5.search\n6.exit\n";
cout<<"enter your choice\n";
cin>>ch;
switch(ch)
{
case 1:obj.create();
break;
case 2:obj.display();
break;
case 3:obj.insert();
break;
case 4:k=obj.deletepos();
cout<<"\ndeleted element from the list is:"<<k;
break;
case 5:obj.search();
break;
case 6:exit(0);
default:cout<<"\nwrong choice\n";
}
}
while(ch>0&&ch<7);
}
void d11::create()
{
node *temp, *p;
temp=new node;
temp->next=NULL;
cout<<"enter the element:\n";
cin>>temp->data;
if(head==NULL)
{
temp->next=head;
head=temp;
temp->pre=NULL;
}
else
{
p=head;
while(p->next!=NULL)
p=p->next;
temp->next=NULL;
p->next=temp;
temp->pre=p;
}
}
void d11::display()
{
int d;
node *q;
q = head;
cout<<"\nelements in the list are\n";
while(q!=NULL)
{
cout<<"->"<<q->data;
q=q->next;
}
}
void d11::search()
{
int f=0,k,v;
node *p;
p=head;
cout<<"Enter the elements you want to find:\n";
cin>>k;
while(p!=NULL)
{
if(p->data==k)
{
f=1;
cout<<"Element found:\n";
}
p=p->next;
}
if(f==0)
{
cout<<"Element not found\n";
}
}
void d11::insert()
{
int ch;
do
{
cout<<"\n\t1.insertatbeg\n\t2.insertatmid\n\t3.insertatend\n\t4.display\n\t5.exit";
cout<<"Enter your choice:\n";
cin>>ch;
switch(ch)
{
case 1:insertatbeg();
break;
case 2:insertatmid();
break;
case 3:insertatend();
break;
case 4:display();
break;
case 5:exit(0);
break;
default:break;
}
}while(ch>0&&ch<5);
}
void d11::insertatbeg()
{
node *temp,*p;
temp=new node;
cout<<"Enter the inserted element:\n";
cin>>temp->data;
p=head;
temp->next=head;
p->pre=temp;
head=temp;
temp->pre=NULL;
}
void d11::insertatmid()
{
node *temp,*p;
int key;
temp=new node;
cout<<"Enter element:\n";
cin>>temp->data;
cout<<"Enter the key element:\n";
cin>>key;
p=head;
while(p!=NULL)
{
if(p->data==key)
{
p->next->pre=temp;
temp->next=p->next;
p->next=temp;
temp->pre=p;
}
p=p->next;
}
}
void d11::insertatend()
{
node*temp,*p;
temp=new node;
cout<<"\nEnter element:";
cin>>temp->data;
if(head==NULL)
{
temp->next=head;
head=temp;
temp->pre=NULL;
}
else
{
p=head;
while(p->next!=NULL)
p=p->next;
temp->next=NULL;
p->next=temp;
temp->pre=p;
}
}
int d11::deletepos()
{
node *p;
int pos,i,k;
cout<<"\nEnter the position for deletion";
cin>>pos;
if(head!=NULL)
{
if(pos==1)
{
k=head->data;
head=head->next;
head->pre=NULL;
return(k);
}
else
{
i=2;
p=head;
while((p!=NULL)&&(i<pos))
{
p=p->next;
i++;
}
if(p!=NULL)
{
k=p->next->data;
p->next=p->next->next;
p->next->pre=p;
return(k);
}
}
}
else
cout<<"\nLIST IS EMPTY\n";
}
  
