#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node *next;
};
int number=0;
class link
{
	public:
		link()
		{
			head=tail=NULL;
		}
		Node *tail,*head;
		void append(int n)
		{
			Node *temp=new Node;
			temp->data=n;
			temp->next=NULL;
			if(head==NULL)
			{
				head=tail=temp;
			}
			else
			{
				tail->next=temp;
				tail=tail->next;
			}
			number++;
		}
	void Insert_at_head(int n)
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
			temp->next=head;
			head=temp;		
		}	
	}
	void Display()
	{
		Node *temp=head;
		while(temp!=NULL)
		{
			std::cout<<temp->data<<std::endl;
			temp=temp->next;
		}
	}
	void insert_between(int key,int n)
	{
		Node *temp=head;
		Node *temp1=head;
		temp1=temp1->next;
		while(temp1!=NULL)
		{
			if(temp1->data==n)
			{
			Node *new_node=new Node;
			new_node->data=key;
			new_node->next=temp1;
			temp->next=new_node;
			}	
		}
	}
	void delete_beg()
	{
		
		 int x;
		
		Node *temp=head;
		 x=temp->data;
		head=head->next;
		delete temp;
	
	}
	void delete_end()
	{
		int i=0;
		Node *temp=head->next;
		Node *temp1=head;
		while(temp!=NULL)
		{
			temp=temp->next;
			temp1=temp1->next; 
		}
		int x;
		x=temp->data;
		delete temp;
		tail=temp1;
		temp1->next=NULL;
	}
	void delete_particular(int key)
	{
		int x;
		Node *current=head->next;
		Node *pre=head;
		while(current!=NULL)
		{
			if(key==current->data)
			{
				Node *Next=current->next;
				x=current->data;
				delete current;
				pre->next=Next;
			}
			current=current->next;
			pre=pre->next;
		}
		
	}
	void  search(int key)
	{
		int x,flag=0, itr=0;
		Node *temp=head;
		while(temp!=NULL)
		{
			itr++;
			if(temp->data==key)
			{
				flag=1;
				x=itr;
			}
			temp=temp->next;
		}
		if(flag==1)
		{
			cout<<"the element is found at " <<x<<" places from head"<<endl;
		}
		else
		{
			cout<<"the element is not in the list"<<endl;
		}
		}	
};
int main()
{
	link l;
	int choice,input, np=1;

//	while(np>=1)
//	{
		start:
		cout<<"enter the number of the operation you want to perform\n1. Insertion at the beginning.\n2. Insertion at the end.\n3. Insertion in between.\n4. Deletion from the beginning.\n5. Deletion from the end.\n6. Deletion of a specific node.\n7. Search for a node and display its position from head.\n8. Display all the node values.\n9. exit\n";
		cin>>choice;
		switch(choice)
		{
			case 1:{
					cout<<"enter the number which you want to insert at the beginning"<<endl;				
				
					cin>>input;
					l.Insert_at_head(input);
				goto start;
			}
			case 2:{
					cout<<"enter the number which you want to insert at the end"<<endl;
					cin>>input;
					l.append(input);
		     	goto start;	
			}	
			case 3:{
				int num;
				cout<<"enter the number before you want to enter the new number"<<endl;
				cin>>num;
				cout<<"enter the number you want add"<<endl;
				cin>>input;
				l.insert_between(input,num);
				goto start;
			}
			case 4:{
				cout<<"deletion at beginnig has been done"<<endl;
				l.delete_beg();
			    goto start;
			}	
			case 5:{
				cout<<"deletion at the end has been done"<<endl;
				l.delete_end();
				 goto start;
			}
			case 6:{
				cout<<"enter the node value you want to delete"<<endl;
				cin>>input;
				l.delete_particular(input);
			    goto start;
			}
			case 7:{
				cout<<"enter the element you want to search and and to know the position"<<endl;
				cin>>input;
				l.search(input);
		   	    goto start;
			}
			case 8:{
				cout<<"the list is as follows"<<endl;
				l.Display();
			  goto start;
			}
			case 9:{
				cout<<"program has been exited \n have a nice day :-)"<<endl;
				exit(1);
				break;
			}	
		}
//	}
	return 0;
}
