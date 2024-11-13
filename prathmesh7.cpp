#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
class node
{
};
int prn;
string name;
struct node *link;
friend class linkedlist;
class linkedlist
{
node *start;
public:
linkedlist()
{
}
start=NULL;
void insert_President()
{
node *tmp;
tmp=new node();
int pr;
string nm;
cout<<"Enter PRN and Name:\n";
cin>>pr>>nm;
tmp->prn=pr;
tmp->name=nm;
tmp->link=NULL;
if(start==NULL)
start=tmp;
else
{
}
display();
}
tmp->link=start;
start=tmp;
void insert_Secretary()
{
node *tmp,*q;
int pr;
string nm;
tmp=new node();
cout<<"Enter PRN and Name:\n";
cin>>pr>>nm;
tmp->prn=pr;
tmp->name=nm;
tmp->link=NULL;
if(start==NULL)
start=tmp;
else
{
}
display();
}
q=start;
while(q->link!=NULL)
q=q->link;
q->link=tmp;
void insert_Member()
{
display();
int pr;
string nm;
node *q,*tmp;
tmp=new node();
int index;
cout<<"Enter PRN and Name:\n";
cin>>pr>>nm;
tmp->prn=pr;
tmp->name=nm;
tmp->link=NULL;
if(start==NULL)
{
inserted :\n";
}
else
{
start=tmp;
cout<<"\nEnter index after which element to be
cin>>index;
q=start;
for(int i=0;i<index;i++)
{
q = q->link;
if(q==NULL)
{
elements\n";
cout<<"There are less
return;
}
}
}
display();
}
tmp->link = q->link;
q->link = tmp;
void del_President()
{
node *tmp;
tmp=start;
start=start->link;
free(tmp);
display();
}
void del_Secretary()
{
struct node *q,*tmp;
q=start;
tmp=start;
while(tmp->link!=NULL)
{
q=tmp;
tmp=tmp->link;
}
q->link=NULL;
free(tmp);
display();
}
void del_Member()
{
int pr;
cout<<"enter PRN to be deleted";
cin>>pr;
node *q,*tmp;
q=start;
tmp=start;
while(tmp->link!=NULL)
{
if(tmp->prn==pr)
{
}
q=tmp;
q->link=tmp->link;
free(tmp);
break;
}
display();
}
tmp=tmp->link;
void display()
{
node *q;
if(start==NULL)
cout<<"Club is empty!!\n";
else
{
cout<<"**** Members in Club ****\n";
q=start;
while(q!=NULL)
{
}
void count()
{
}
}
node *q;
int i=0;
q=start;
cout<<q->prn<<" "<<q->name<<endl;
q=q->link;
while(q!=NULL)
{
i++;
q=q->link;
}
cout<<"Total no. of members in club"<<i;
}
void reverse1()
{
reverse(start);
}
void concat(linkedlist l1,linkedlist l2)
{
node *ptr;
ptr=l1.start;
while(ptr->link!=NULL)
ptr=ptr->link;
ptr->link=l2.start;
l1.display();
}
};
int main()
{
linkedlist l1,l2;
int ch;
cout<<"\n****Linked List*****\n";
cout<<"\n1.Insert President \n2.Insert Secretary \n3.Insert Member
\n4.Delete President \n5.Delete Secretary \n6.Delete Member \n7.Display \n8.Count
\n9.Concat \n10.Exit\n";
while(1)
{
cout<<"\nEnter Your Choice :(1.Insert President 2.Insert
Secretary 3.Insert Member 4.Delete President 5.Delete Secretary 6. Delete Member
7.Display 8.Count 9.Concat 10.Exit)\n";
cin>>ch;
switch(ch)
{
case 1:
case 2:
case 3:
case 4:
case 5:
case 6:
case 7:
case 8:
l1.insert_President();
break;
l1.insert_Secretary();
break;
l1.insert_Member();
break;
l1.del_President();
break;
l1.del_Secretary();
break;
l1.del_Member();
break;
l1.display();
break;
l1.count();
break;
case 9:
case 10:
default:
l2.insert_President();
l2.insert_Member();
l2.insert_Secretary();
l1.concat(l1,l2);
break;
exit(0);
printf("\nWrong Choice !!\n");
}
}
return 0;
}
