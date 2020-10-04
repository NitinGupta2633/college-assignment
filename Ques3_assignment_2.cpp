#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node *next;
};
class Link_list
{
	public:
		Node *head,*tail;
		void insert(int n)
		{
			Node *temp=new Node;
			temp->data=n;
			
			temp->next=NULL;
			if(head==NULL)
			{
				head=temp;
				tail=temp;
			}
			else
			{
				tail->next=temp;
				tail=tail->next;
			}
		}
		void occur(int n)
		{
			Node *temp=head;
			int counter=0;
			while(temp!=NULL)
			{
				if(temp->data==n)
				{
						
					counter++;
				}
				temp=temp->next;
			}
			std::cout<<"the element "<<n <<"  has been ocuured "<<counter<< " times in the list"<<std::endl;
		}
		void display()
		{
			cout<<"the entered list is"<<endl;
			Node *temp=head;
			while(temp!=NULL)
			{
				cout<<temp->data<<endl;
				temp=temp->next;
			}
		}
		void middle()
		{
			Node *slow=head,*fast=head;
			int data;
			while(fast!=NULL)
			{
				slow=slow->next;
				fast=fast->next;
				fast=fast->next;	
					data=slow->data;
			}	
			delete fast;			
			cout<<"middle element is" <<data<<endl;
		}
		void reverse()
		{
			Node *current=head,*previous=NULL,*Next=NULL;
			while(current!=NULL)
			{
				Next=current->next;
   				current->next=previous;
   				previous=current;
   				current=Next;
			}
			head=previous;
			cout<<"after reversing"<<endl;
		}
		
};
int main()
{
	Link_list l;
	l.insert(1);
	l.insert(2);
	l.insert(3);
	l.insert(4);
	l.insert(5);
	l.insert(6);
	l.insert(7);
	l.display();
	l.middle();
	//l.reverse();
	//l.display();
	
}
