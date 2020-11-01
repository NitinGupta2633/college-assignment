#include<iostream>
class Node{
	public:
		int data;
		Node *next;
};
int limit=0;
class stack{
	public:
		Node *head,*tail;
		int stack_cap=0;
		stack()
		{
		
			head=tail=NULL;
		}
		void push(int x)
		{
			if(stack_cap>=limit)
			{
				std::cout<<"the stack is full"<<std::endl;
			}
			else
			{
				Node *temp=new Node;
				temp->data=x;
				temp->next=NULL;
				if(head==NULL)
				{
					head=tail=temp;
				}
				else
				{
					temp->next=head;
					head=temp;
				}
				stack_cap++;
			}
		}
		void pop()
		{
			if(stack_cap==0)
			{
				std::cout<<"the stack is empty elements can't be poped"<<std::endl;
			}
			else
			{
				std::cout<<head->data <<" has been poped out of the stack"<<std::endl;
				int x;
				x=head->data;
				Node *temp=head;
				head=head->next;
				delete temp;
				stack_cap--;
			}
			
		}
		void isempty()
		{
			if(stack_cap==0)
			{
				std::cout<<"stack is empty"<<std::endl;
			}
			else 
			{
				std::cout<<"stack is not empty"<<std::endl;
			}
		}
		void isfull()
		{
			if(stack_cap>=limit)
			{
				std::cout<<"stack is full"<<std::endl;
			}
			else 
			{
				std::cout<<"there is some space for element in the stack it's not  full"<<std::endl;
			}
		}
		void display()
		{
			Node *temp=head;
			while(temp!=NULL)
			{
				std::cout<<temp->data<<std::endl;
				temp=temp->next;
			}
		}
		void peek()
		{
			std::cout<<"the current peek element is "<<head->data<<std::endl;
		}
};
int main()
{
	stack s;
	std::cout<<"enter the max quantity of stack"<<std::endl;
	std::cin>>limit;
	s.push(5);
	s.push(4);
	s.push(3);
	s.push(2);
	s.push(1);
	s.isfull();
	s.peek();
	s.display();
	s.isempty();
	
}
