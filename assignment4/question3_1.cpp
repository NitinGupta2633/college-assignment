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
		int size()
		{
			Node *temp=head;
			int b=0;
			while(temp!=NULL)
			{
				b++;
				temp=temp->next;
			}
			return b;
			
		}
};
int main()
{
 List l;
 l.append(100);
 l.append(200);
 l.append(300);
 l.append(400);
 int r;
 r=l.size();
 cout<<"size = "<<r<<endl;
}
