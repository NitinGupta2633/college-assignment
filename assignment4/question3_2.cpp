#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node *next;
};
class list {
	public:
		Node *tail,*head;
		list()
		{
			tail=NULL;
			head=NULL;
		}
		void append(int val)
		{
			Node *temp=new Node;
			temp->data=val;
			temp->next=NULL;
			if(head==NULL)
			{
				head=tail=temp;
			}
			else
			{
				tail->next=temp;
				tail=temp;
				
			}
		}
		void make_cir()
		{
			tail->next=head;
		}
		void display()
		{
			
			Node *temp=head;
			Node *temp1=temp->next;
			int n=0;
			while(temp!=NULL)
			{
				if(temp==temp1)
				{
					n++;
					if(n>1)
					{
						break;
					}
				}
				cout<<temp->data<<" ";
				temp=temp->next;
			}
		}
		int size()
		{
			int n;
			Node *temp=head;
			do{
				n++;
				temp=temp->next;
			}
			while(temp!=head);
			
		return n;
		}
};
int main()
{
	list l;
	l.append(1);
	l.append(2);
	l.append(3);
	l.append(4);
	l.append(5);
	l.make_cir();
	int n;
	n=l.size();
	cout<<"size = "<<n;
}
