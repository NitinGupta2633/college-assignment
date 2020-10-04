#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node *next;
};
class Link_List
{
	Node *tail,*head;
	public:
		Link_List()
		{
			head=NULL;
			tail=NULL;
		}
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
	void search(int key)
	{
		int itr=0;
		Node *temp=head;
		while(temp!=NULL)
		{
			if(temp->data==key)
			{
				itr++;
			}
			temp=temp->next;
		}
		cout<<key<<" has repeated "<<itr<<" times in the list"<<endl;
	}
		void display()
	{
		cout<<"entered list is ==\n";
			Node *temp=head;
		while(temp!=NULL)
		{
			std::cout<<temp->data<<std::endl;
			temp=temp->next;
		}
	}
	void delete_head()
	{
	
		Node *temp=head;
		head= head->next;
		int x;
		x=temp->data;
		delete temp;
	
	}
	void delete_tail()
	{
		Node *temp=head;
		Node *temp1;
		while(temp!=NULL)
		{	
			temp1=temp;
			temp=temp->next;
		}
		Node *temp2=head;
		Node *temp3;
		while(temp2!=temp1)
		{
			temp3=temp2;
			temp2=temp2->next;
				}		
		int x;
		x=temp1->data;
		temp3->next==NULL;
		tail=temp3;
     	tail->next=NULL;
		delete temp1;
	
	
	}
	void delete_bet(int key)
	{
		Node *pre;
		Node *current=head;
		while(current!=NULL)
		{
		
			if(current->data==key)
			{
				if(current==head)
				{	
					delete_head();	
					current=head->next;
				}
				else if(current==tail)
				{
			       delete_tail();
				   current=tail;  		
				}
				else
				{
					pre->next=current->next;
					delete current;
					current=head;	
				}
			}	
			pre=current;
			current=current->next;
			}
	}
};
int main()
{
	Link_List l;
	l.insert(1);
	l.insert(2);
	l.insert(1);
	l.insert(2);
	l.insert(1);
	l.insert(3);
	l.insert(1);
	l.display();
	l.search(1);
	cout<<"after deletion of repeated element"<<endl;
	l.delete_bet(1);
	l.display();
}
