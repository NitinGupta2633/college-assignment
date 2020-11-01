#include<iostream>
using namespace std;
class stack{
	public:
		int stack[10];
		int stack_index=-1;
		bool isoperand(char x)
		{
			if(x=='+'||x=='-'||x=='*'||x=='/')
			{
				return 1;
			}
			
			else
			{
				return 0;
			}
		}
		void push(char x)
		{
			if(isoperand(x))
			{
					if(x=='+')	
					{
					stack[stack_index-1]=stack[stack_index-1]+stack[stack_index];
					stack_index--;
					}
					else if(x=='-')	
					{
					stack[stack_index-1]=stack[stack_index-1]-stack[stack_index];
					stack_index--;
					
					}
					else if(x=='*')	
					{
					stack[stack_index-1]=stack[stack_index-1]*stack[stack_index];
					stack_index--;
					
					}
					else if(x=='/')	
					{
					stack[stack_index-1]=stack[stack_index-1]/stack[stack_index];
					stack_index--;
					
					}
			}
			else
			{
				int num=x-'0';
				stack_index++;
				stack[stack_index]=num;
			}
		}
		void ans()
		{
			cout<<stack[0];
		}
};
int main()
{
	  char exp[] = "231*+9-";
	  stack s;
	  for(int i=0;exp[i]!='\0';i++)
	  {
			s.push(exp[i]);  	
	  }
	s.ans();
}
