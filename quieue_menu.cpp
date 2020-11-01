#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node *next;
};
int index=0;
class queue{
	public:
		Node *head,*tail;
		int count=0;
		queue()
		{
			head=tail=NULL;
		}
		void enqueue(int x)
		{
			if(count<index)
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
				tail->next=temp;
				tail=tail->next;
				tail->next=head;
			}
			count++;
			}
			else
			{
				cout<<"queue is full"<<endl;
			}
		}
		
		void dequeue()
		{
			int x;
			Node *temp=head;
			x=head->data;
			head=head->next;
			delete temp;
			cout<<"dequeue is done --dequeue element is "<<x<<endl;
			count--;
		}
		void isempty()
		{
			if(count==-1)
			{
				cout<<"queue is empty"<<endl;
			}
			else
			
			{
				cout<<"queue is not empty"<<endl;
			}
		}
		void isfull()
		{
			if(count==index)
			{
				cout<<"queue is full"<<endl;
			}
			else
			{
				cout<<"queue is not full"<<endl;
			}
		}
		void peek()
		{
			cout<<"peek element is "<<head->data<<endl;
		}
		void display()
		{
			Node *temp=head->next;
			cout<<head->data<<" ";
			while(temp!=head)
			{
				cout<<temp->data<<" ";
				temp=temp->next;
			}
		}
};
int main()
{
	queue q;
	cout<<"enter the size of queue"<<endl;
	cin>>index;
	 q.enqueue(5);
	 q.enqueue(4);
	 q.enqueue(3);
	 q.enqueue(2);
	 q.enqueue(1);
	 q.isempty();
	 q.isfull();
	 q.peek();
	 q.display();
}
