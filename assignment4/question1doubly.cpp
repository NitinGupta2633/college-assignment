#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node *next;
		Node *pre;
};
class List{
	public:
		Node *head,*tail;
		List()
		{
			head=NULL;
			tail=NULL;			
		}
		void append(int val)
		{
			Node *temp=new Node;
			temp->data=val;
			temp->next=temp->pre=NULL;
			if(head==NULL)
			{
				head=temp;
				tail=temp;
			}
			else
			{
				tail->next=temp;
				temp->pre=tail;
				tail=temp;
				temp->next=NULL;
			}
		}
		void add_head(int n)
		{
			Node *temp=new Node;
			temp->data=n;
			temp->pre=NULL;
			head->pre=temp;
			temp->next=head;
			head=temp;
		}
		void before_element(int ele,int val_to_be_added)
		{
			
			Node *temp1=head;
			while(temp1!=NULL)
			{
				
				if(temp1->data==ele)
				{
					Node *temp2=temp1->pre;
					Node *temp_new=new Node;
					temp_new->data=val_to_be_added;
					temp_new->pre=temp2;
					temp_new->next=temp1;
					temp1->pre=temp_new;
					temp2->next=temp_new;
				}
				temp1=temp1->next;
			}
		}
		void add_after_element(int ele ,int val)
		{
			Node *temp=head;
			while(temp->next=NULL)
			{
				if(temp->data==ele)
				{
					Node *temp_new=new Node;
					temp_new->data=val;
					Node *temp2=temp->next;
					temp->next=temp_new;
					temp2->pre=temp;
					temp_new->next=temp2;
					temp_new->pre=temp;
				}
				temp=temp->next;
			}
		}
		void delete_head_node()
		{
			Node *temp=head;
			head=head->next;
			int x;
			x=temp->data;
			head->pre=NULL;
			delete temp;
		}
		void delete_tail()
		{
			Node *temp=tail;
			int x;
			x=temp->data;
			tail=tail->pre;
			tail->next=NULL;
			delete temp;
		}
		void delete_particular(int val)
		{
			Node *temp=head;
			while(temp!=NULL)
			{
			
				if(temp->data==val)
				{	
					Node *temp1=temp->next;
					Node *temp2=temp->pre;
					int x;
					x=temp->data;
					delete temp;
					temp1->pre=temp2;
					temp2->next=temp1;
					break;
				}
				
				temp=temp->next;
			}
		}
		void search(int val)
		{
			Node *temp=head;
			int flag=0;
			while(temp->next!=NULL)
			{
				if(temp->data==val)
				{
					flag=1;
				}
			}
			string message = flag==1 ? "value present in the  list " : "value is not in the list";
			cout<<message<<endl;
		}
		void display()
		{
			Node *temp=head;
			while(temp!=NULL)
			{
				cout<<temp->data<<" ";
				temp=temp->next;
			}
		}
};
int main()
{
	List l;
	l.append(1);
	l.append(2);
	l.append(3);
	l.add_head(0);
	l.delete_tail();
	l.append(4);
	l.append(5);
	l.add_head(-1);
	l.before_element(2,5);
	l.delete_head_node();
	l.delete_particular(2);
	l.display();
	}
