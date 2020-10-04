#include<iostream>
int main()
{
	int array[100],x,y,a=-1,c;
	std::cout<<"enter the number of element you want to enter "<<std::endl;
	std::cin>>x;
	std::cout<<"enter the element "<<std::endl;
	for(int i=0;i<x;i++)
	{
		std::cin>>y;
		array[i]=y;
	}
	for(int j=0;j<x-1;j++)
	{
		for(int i=0;i<x-j-1;i++)
		{
			if(array[i]>array[i+1])
			{ 
			//std::cout<<"test1"<<std::endl;
				c=array[i];
				array[i]=array[i+1];
				array[i+1]=c;
			}
		}
	}
	std::cout<<"elements in sorted order"<<std::endl;
	for(int i=0;i<x;i++)
	{
		std::cout<<array[i]<<std::endl;
	}
}
