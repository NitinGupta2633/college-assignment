#include<iostream>
int main()
{
	int array[100],x,y;
	
	std::cout<<"enter the number of element you want to enter"<<std::endl;
	std::cin>>x;
	std::cout<<"enter the elements"<<std::endl;
	for(int i=0;i<x;i++)
	{
		std::cin>>y;
		array[i]=y;
	}
	std::cout<<"element in reverse order"<<std::endl;
	for(int j=x-1;j>=0;j--)
	{
		std::cout<<array[j]<<std::endl;
	}
}
