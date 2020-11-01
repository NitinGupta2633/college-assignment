#include<iostream>
using namespace std;
class stack{
	public:
		char stack[20];
		string final;
		int stack_current=-1;
		int final_position=-1;
		int isoperand(char x)
		{
			if(x=='/'||x=='*'||x=='-'||x=='+')
			{
				return 1;	
			}
			else 
			{
				return 0;
			}
		}
		int pre(char x)
		{
			 if(x=='*'||x=='/')
			 {
			 	return 2;
			 }
			 else {
			 	return 1;
			 }
		}
		void push(char x)
		{
			if(isoperand(x))
			{
				stack_current++;
				if(stack_current==0)
				{
					stack[stack_current]=x;
				}
				else
				{
					if(pre(x)>pre(stack[stack_current]))
					{
						stack_current++;
						stack[stack_current]=x;
					}
					else
					{
						final_position++;
						final[final_position]=x;
						final_position++;
						final[final_position]=stack[stack_current];
						stack_current--;
					}
				}
			}
			else
			{
				final_position++;
				final[final_position]=x;
					
			}
		}
		void dispaly()
		{
			for(int i=0;final[i]!='\0';i++)
			{
				cout<<final[i];
			}
		}
};
int main()
{
	stack k;
	char s[]={"a+b*c-d/e"};
	for(int i=0;s[i]!='\0';i++)
	{
		k.push(s[i]);
	}
	k.dispaly();
}
