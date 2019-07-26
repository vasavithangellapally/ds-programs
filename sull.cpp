#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
class sull
{
struct stack
{
int data;
struct stack *next;
}*top;
public: 
typedef struct stack node;
void push();
int pop();
void display();
sull();
};
sull::sull()
{
top=NULL;
}
int main()
{
sull obj;
int ch,k;
while(1)
{
cout<<"1.push\n2.pop\n3.display\n4.quit\n";
cout<<"enter your choice\n";
cin>>ch;
switch(ch)
{
	case 1: obj.push();
	break;
	case 2: obj.pop();
	break;
	case 3: obj.display();
	break;
	case 4: exit(1);
	default: cout<<"\nwrong choice\n";
}
}
}
void sull::push()
{
node *temp;
temp=new node;
cout<<"Enter the inserted element in the stack:\n";
cin>>temp->data;
temp->next=top;
top=temp;
}
int sull::pop()
{
int k;
node *p,*q;
p=top;
k=top->data;
q=top;
top=p->next;
free(q);
return(k);
}
void sull::display()
{
node *p;
p=top;
cout<<"\nelements in the stack are:\n";
if(top!=NULL)
{
while(p!=NULL)
{
cout<<"->"<<p->data<<"\n";
p=p->next;
}
}
else
cout<<"stack is empty\n";
}
# ds-programs
