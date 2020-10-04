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
	void insert_head(int val)
	{
		
		Node *temp=new Node ;
		temp->data=val;
		temp->next=head;
		head=temp;
		make_circular();
	}
	void add_before(int before,int val )
	{
		Node *temp=new Node ;
		temp->data=val;
		temp->next=NULL;
		Node *current=head;
		Node *pre=head;
		while(current->next!=NULL)
		{
			if(current->data==before)
			{
				pre->next=temp;
				temp->next=current;
			}
			pre=current;
			current=current->next;
		}
	}
	void add_after(int after , int val)
	{
		Node *temp=new Node;
		temp->data=val;
        temp->next=NULL;
		Node *current=head;
		Node *Next=current->next;
		while(current->next!=NULL)
		{
			if(current->data==val)
			{
				current->next=temp;
				temp->next=Next;
			}
			current=Next;
			Next=Next->next;
		}	
	}
	void delete_Node(int val)
	{
		Node *temp=head;
		Node *pre=head;
		while(temp!=NULL)
		{
			if(temp->data==val)
			{
				if(head==temp)
				{
					Node *temp1=head;
					head=head->next;
					int x=temp1->data;
					delete temp1;
					make_circular();
				}
				else if(temp==tail)
				{
					Node *temp1=tail;
					tail=pre;
					int x=temp1->data;
					delete temp1;
					make_circular();
				}
				else
				{
					pre->next=temp->next;
					delete temp;
				}
			}
			pre=temp;
			temp=temp->next;
		}
			}		
	void search(int val)
	{
		int flag=0;
		Node *temp=head;
		while(temp!=tail)
		{
			if(temp->data==val)
			{
				flag=1;
			}
			temp=temp->next;
		}
		if(flag==1)
		{
			std::cout<<"element is in the list"<<std::endl;
		}
		else
		{
		std::cout<<"sorry element is not in the list"<<std::endl;
		}
			}		
		void display()
		{
			Node *temp=head->next;
			std::cout<<head->data<<" "<<std::endl;
			while(temp!=head)
			{
			std::cout<<temp->data<<" "<<std::endl;
			temp=temp->next;
			}
		}
};
int main()
{
	int choice=0;
	list l;
	while(1)
	{
		std::cout<<"enter the operation you want to perform"<<std::endl;
		std::cout<<"1 for append in the list"<<std::endl;
		std::cout<<"2 for insert at head"<<std::endl;
		std::cout<<"3 for delete node "<<std::endl;
		std::cout<<"4 for display"<<std::endl;
		std::cout<<"5 for add after some particular node "<<std::endl;
		std::cout<<"6 for add before some particular node "<<std::endl;
		std::cout<<"7 for exit "<<std::endl;
		std::cin>>choice;
		switch (choice ){
			case 1:
				int x;
				std::cout<<"enter the value to append"<<std::endl;
				std::cin>>x;
				l.insert(x);
				break;
			case 2:
				int y;
				std::cout<<"enter the value to add at head"<<std::endl;
				std::cin>>y;
				l.insert_head(y);
				break;
			case 3:	
				int e;
				std::cout<<"enter the value to be deleted"<<std::endl;
				std::cin>>e;
				l.delete_Node(e);
				break;
			case 4:
				l.display();
				break;
			case 5:
				int after,val;
				std::cout<<"enter the value of the node after which you want to add and the value to be added"<<std::endl;
				std::cin>>after>>val;
				l.add_after(after ,val);
				break;
			case 6:
				int before,val1;
				std::cout<<"enter the value of the node before which you want to add and the value to be added"<<std::endl;
				std::cin>>before>>val1;
				l.add_after(after ,val1);
				break;
			case 7:
			exit(1);	
		}
			
		}	
}
