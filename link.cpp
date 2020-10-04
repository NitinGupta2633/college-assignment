#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node *next;
};
class Link_List
{
	public:
		Node *tail,*head;
		Link_List()
		{
			tail=NULL;
			head=NULL;
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
		void insert_at_beginning(int n)
		{
			Node *temp=new Node;
			temp->data=n;
			temp->next=head;
			head=temp;
			
		}
	void insert_in_middle(int n)
	{
			Node *temp=head;
			Node *pre=head;
			temp=head->next;
			while(temp->next!=NULL)
			{
				if(temp->data>n)
				{	
					Node *temp1=new Node;
					temp1->data=n;
					temp1->next=temp;
					pre->next=temp1;
				}
				pre=pre->next;
				temp=temp->next;
			}
	}	
		void display()
		{
			Node *temp=head;
			while(temp!=NULL)
			{
				cout<<temp->data<<endl;
				temp=temp->next;
			}
		}
};
int main()
{
	Link_List l;
	std::cout<<"created link_list"<<std::endl;
	l.insert(1);
	l.insert(2);
	l.insert(3);
	l.insert(4);
	l.insert(5);
	l.insert(7);
	l.display();
	cout<<"now inserting 0 at beginning "<<endl;
	l.insert_at_beginning(0);
	l.display();
	cout<<"Now inserting 8 at the last"<<endl;
	l.insert(8);
	cout<<"inserting 6 in the middle"<<endl;
	l.insert_in_middle(6);
	l.display();	
	
	
}
