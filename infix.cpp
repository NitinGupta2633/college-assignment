#include<iostream>
	int current=-1;
	int index=-1;
	class stack{
		public:
			char store[100];
			char ans[100];
			int check_pre(char c)
			{
				if(c=='+'||c=='-')
				{
					return 1;
				}
				else if (c=='*'||c=='/')
				{
					return 2;
				}
				else if(c=='a'||c=='b'||c=='c')
				{
					return 3;
				}
			}
			bool isempty()
			{
				if(current==-1)
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			void pop_store(char c)
			{
				index++;
				ans[index]=c;
				current--;
			}
			void pop_store()
			{
				while(current!=-1)
				{
					index++;
					ans[index]=store[current];
					current--;
				}
			}
			void push(char c)
			{
					if(isempty())
					{
						current++;
						store[current]=c;
					}
					else
					{
						if(check_pre(c) > check_pre(store[current]))
						{
							current++;
							store[current]=c;
						}
						else
						{
							pop_store(store[current]);
							push(c);
						}
					}
			}
			void display()
			{
				for(int i=0;i<=index;i++)
				{
					std::cout<<ans[i];
				}
			}
			void end(int flag_value)
			{
				if(flag_value==1)
				{
					pop_store();
				}
			}
	};
	int main()
	{
			stack x;int flag=0;
			char arr[]={"a+b*c-d/e"};
			for(int j=0;arr[j]!='\0';j++)
			{
				x.push(arr[j]);	
			}
		x.end(1);
		x.display();
	}

