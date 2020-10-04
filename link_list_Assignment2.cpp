#include<iostream>
using namespace std;
class Node
{
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
	void display()
	{
		Node *temp=head;
		while(temp!=NULL)
		{
			cout<<temp->data<<endl;
			temp=temp->next;
		}
	}
	void insert_between(int n ,int after_n_variable)
	{
		Node *temp=new Node;
		temp->data=n;
		temp->next=NULL;
		Node *temp1=head,*previous=head;
		temp=temp->next;
		while(temp1!=NULL)
		{
			if(temp1->data==after_n_variable)
			{
				temp->next=temp1;
				previous->next=temp;		
			}
			previous=previous->next;
			temp1=temp1->next;
			
		}	
	}
	void insertion_beg(int n)
	{
		Node *temp=new Node;
		temp->data=n;
		temp->next=head;
		head=temp;
	}
	void delete_beg()
	{
		Node *temp=head->next;
		int x;
		x=head->data;
		delete head;
		head=temp;
	}
	void delete_end()
	{
		Node *temp=head->next;
		Node *temp1=head;
		while(temp1!=NULL)
		{
			temp=temp->next;
			temp1=temp1->next;
		}
		int x;
		x=tail->data;
		delete tail;
		tail=temp1;
	}
	void delete_specific(int n)
	{
		Node *Next=head->next;
		Node *pre=head;
		while(Next!=NULL)
		{
			if(Next->data==n)
			{
				Node *current=Next;
				Next=Next->next;
				int x;
				x=current->data;
				delete current;
				pre->next=Next;
			
			}
		}
	}
	void search(int n)
	{
		Node *temp=head;
		int itr=0,flag=0;
		while(temp!=NULL)
		{
			itr++;
			if(temp->data==n)
			{
				
				flag==1;
			}
		}
		if(flag==0)
		{
			cout<<"sorry but the element is not in the list"<<endl;
		}
		if(itr==1)
		{
			cout<<n <<" is at head "<<endl;
		}
		else
		{
			cout<<"element "<<n<<" is "	<<itr-1<<" positions ahead of head"<<endl;	
		}	
	}
};
int main()
{
	int n,x;
	Link_list l;
	int i=1;
	while(i==1)	
	{
	start:
	cout<<"which operation you want to perform on link_list"<<endl;
	cout<<"(1) Insertion at the beginning.\n(2) Insertion at the end.\n(3) Insertion in between.\n(4) Deletion from the beginning.\n(5) Deletion from the end.\n(6) Deletion of a specific node\n(7) Search for a node and display its position from head.\n(8) Display all the node values.\n(9) Exit"<<endl;
	cin>>x;
	switch(x)
	{
		case 2:
			cout<<"enter the element"<<endl;
			cin>>n;
			l.insert(n);
			goto start;
		case 1:
			cout<<"enter the element"<<endl;
			cin>>n;
			l.insertion_beg(n);
			goto start;
		case 3:
			int k;
			cout<<"enter the element you want to insert"<<endl;
			cin>>n;
			cout<<"enter the element you before which you have to insert the element"<<endl;
			cin>>k;
			l.insert_between(n,k);
			goto start;
		case 4:
			cout<<"action performed"<<endl;
			l.delete_beg();
			goto start;
		case 5:
			cout<<"action performed"<<endl;
			l.delete_end();
		
			goto start;
		case 6:
			cout<<"enter the element which you want to delete"<<endl;
			cin>>n;
			l.delete_specific(n);
		
			goto start;
		case 7:
			cout<<"enter the element you want to search"<<endl;
			cin>>n;
			l.search(n);
			goto start;
		case 8:
			l.display();
			break;
		case 9:
			i=0;
			break;
		default:
			cout<<"wrong choice enter \nPlease enter new choice"<<endl;
			goto start;		
	}
	}
}
