#include<iostream>
using namespace std;
class Node{
	public:
		char data;
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
		void append(char val)
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
		bool check_palindrome()
		{
			Node *temp=head,*temp1=tail;
			while(temp!=NULL)
			{
				if(temp->data!=temp1->data)
				{
					return false;
				}
				temp=temp->next;
				temp1=temp1->pre;
			}
			return true;
			
		}
};

int main(){
	List l;
	l.append('n');
	l.append('i');
	l.append('t');
	l.append('i');
	l.append('n');
	if(l.check_palindrome())
	{
		cout<<"its a pallindrome"<<endl;
	}
	else
	{
		cout<<"its not"<<endl;
	}
	
}
