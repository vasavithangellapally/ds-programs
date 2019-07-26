#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
class s11
{
struct list
{
int data;
struct list *next;
}*head;
public:
typedef struct list node;
s11();
void create();
void insert();
void display();
int count();
int deletepos();
void insertatbeg();
void insertatmid();
void insertatend();
void search();
};
s11::s11()
{
head=NULL;
}
int main()
{
int ch,k,c;
s11 obj;
do
{
cout<<"\n\tMAIN MENU\n";
cout<<"\t\t1.create\n\t\t2.display\n\t3.insert\n\t4.deletepos\n\t5.count\n\t6.search\n\t7.exit\n\t";
cout<<"enter your choice:";
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
case 5:c=obj.count();
cout<<"no.of elements in the list:"<<c;
break;
case 6:obj.search();
break;
case 7:exit(0);
}
}
while(ch>0&&ch<8);
}
void s11::create()
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
}
else
{
p=head;
while(p->next!=NULL)
p=p->next;
temp->next=NULL;
p->next=temp;
}
}
void s11::display()
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
int s11::count()
{
node *p;
int c=0;
p=head;
while(p!=NULL)
{
p=p->next;
c++;
}
return(c);
}
void s11::search()
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
void s11::insert()
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
void s11::insertatbeg()
{
node *temp;
temp=new node;
cout<<"Enter the inserted element:\n";
cin>>temp->data;
temp->next=head;
head=temp;
}
void s11::insertatmid()
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
temp->next=p->next;
p->next=temp;
}
p=p->next;
}
}
void s11::insertatend()
{
node*temp,*p;
temp=new node;
cout<<"\nEnter element:";
cin>>temp->data;
if(head==NULL)
{
temp->next=head;
head=temp;
}
else
{
p=head;
while(p->next!=NULL)
p=p->next;
temp->next=NULL;
p->next=temp;
}
}
int s11::deletepos()
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
return(k);
}
}
}
else
cout<<"\nLIST IS EMPTY\n";
}

# ds-programs
