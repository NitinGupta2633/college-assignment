#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node *next;
};
int index=0;
int counter=0;
class queue{
	public:
		Node *head,*tail;
	
		queue()
		{
			head=tail=NULL;
		}
		void enqueue(int x)
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
				
			}
		
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
			int dequeue()
			{
				int x;
				x=head->data;
				Node *tm=head;
			head=head->next;
			delete tm;
			return x;
				}	
};
void queue_mix(queue x)
{
	queue z;int y;
	for(int j=0;j<counter/2;j++)
	{
		y=x.dequeue();
		z.enqueue(y);
	}
	queue a;
	for(int k=0;k<counter/2;k++)
	{
		y=z.dequeue();
		a.enqueue(y);
		y=x.dequeue();
		a.enqueue(y);
	}
	a.display();
}
int main()
{
	queue q;
	cout<<"enter number of elements you want to enter "<<endl;
	cin>>counter;int x;
	for(int i=0;i<counter;i++)
	{
		 cin>>x;
		q.enqueue(x);
	}
	queue_mix(q);
}
