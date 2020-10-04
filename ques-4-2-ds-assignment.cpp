#include<iostream>
int main()
{
	int array[5][5],x,y,array1[5][5];
	std::cout<<"enter the size of matrix"<<std::endl;
	std::cin>>x>>y;
	std::cout<<"enter the element"<<std::endl;
	int element;
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
			std::cin>>element;
			array[i][j]=element;
		}
	}
	std::cout<<"after transpose"<<std::endl;	
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
			array1[j][i]=array[i][j];
		}
	}
	for(int i=0;i<y;i++)
	{
		for(int j=0;j<x;j++)
		{
			std::cout<<array1[i][j]<<" ";
		}
		std::cout<<"\n";
	}
}
