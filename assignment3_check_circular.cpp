#include<iostream>
class Node {
	public:
		int data;
		Node *next;
};
class list{
	public:
	Node *tail,*head;
	list()
	{
		tail=head=NULL;	
			}		
			void make_circular()
			{
				tail->next=head;
			}
	void insert(int val)
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
			tail=tail->next;
			make_circular();
		}
	}
	void check_loop()
	{
		Node *slow=head;
		Node *fast=head;
		int flag=0;
		while(slow!=tail)
		{
			if(slow==fast)
			{
				flag=1;
				break;
			}
			slow=slow->next;
			fast=slow->next;
		}
		if(flag==1)
		{
			std::cout<<"list is circular"<<std::endl;
		}
		else{
			std::cout<<"list is not circular"<<std::endl;
		}
	}
	
};
int main()
{
	list l;
	l.insert(5);
	l.insert(4);
	l.insert(3);
	l.insert(2);
	l.insert(1);
	l.check_loop();
}
