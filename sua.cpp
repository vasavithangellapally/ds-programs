#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#define MAX 5
int top;
int a[5];
using namespace std;
class sua
{
public: 
void push();
void pop();
void display();
sua();
};
sua::sua()
{
top=-1;
}
int main()
{
sua obj;
int choice;
while(1)
{
cout<<"1.push\n2.pop\n3.display\n4.quit\n";
cout<<"enter your choice\n";
cin>>choice;
switch(choice)
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
void sua::push()
{
int pushed_item;
if(top==(MAX-1))
{
cout<<"stack overflow\n";
}
else
{
cout<<"enter the item to be pushed in stack:\n";
cin>>pushed_item;
top=top+1;
a[top]=pushed_item;
}
}
void sua::display()
{
int i;
if(top==-1)
cout<<"stack is empty\n";
else
{
cout<<"stack elements:\n";
for(i=top;i>=0;i--)
cout<<a[i]<<"\n";
}
}
void sua::pop()
{
if(top==-1)
cout<<"stack underflow\n";
else
{
cout<<"popped element is:\n"<<a[top];
top=top-1;
}
}


























# ds-programs
