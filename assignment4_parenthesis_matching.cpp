#include<iostream>
using namespace std;
int current=-1;
int cur=-1;
int flag=1;
class stack{
	public:
		char array[100];
		void push_check(char x)
		{
			current++;
			cur=current;
			array[current]=x;
			if(array[current]=='}'||array[current]==']'||array[current]==')')
			{
				
				if(current<0)
				{
					flag=0;
				}
				else if(x=='}'&&array[current-1]!='{')
				{
					flag=0;
				}
				else if(x==')'&&array[current-1]!='(')
				{
					flag=0;
				}
				else if(x==']'&&array[current-1]!='[')
				{
					flag=0;
				}
				
				
			}
		}
		void check()
		{
			if(flag==0)
			{
				std::cout<<"imbalanced expreesion"<<std::endl;
			}
			else
			{
				std::cout<<"balanced expression"<<std::endl;
			}
		}
};
int main()
{
	stack s;
	char arr[]={"[]}"};
	for(int i=0;arr[i]!='\0';i++)
	{
		s.push_check(arr[i]);
	}
	s.check();
}
