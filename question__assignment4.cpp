#include<iostream>
#include<string.h>
int current=-1;
int cur=-1;
class  stack{
	public:
		char array[100];
		
		void push(char x)
		{
			current++;
			cur=current;
			if(x==' ')
			{
				current--;
				cur=current;
				
			}
			else
			{
			
			array[current]=x;
		}
	}
		void pop()
		{
			if(current>=0)
			{
				std::cout<<array[current];
			}
			if(current<0)
			{
				std::cout<<"\n the stack is empty";
			}
			current--;
			
			}	
};
int main()
{
	stack s;
	char p[]={"data structure"};
	for(int i=0;p[i]!='\0';i++)
	{
		s.push(p[i]);
	}
	for(int j=0;j<=cur;j++)
	{
		s.pop();
	}
}
