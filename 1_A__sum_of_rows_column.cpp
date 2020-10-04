#include<iostream>
int main()
{
	int array[10][10];
	int sum=0;
	int row,column;
	std::cout<<"enter size of matrix"<<std::endl;
	std::cin>>row>>column;
	std::cout<<"enter the element of the matrix"<<std::endl;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			std::cin>>array[i][j];
		}
	}
	
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			sum= sum + array[i][j];
			
			
		}
		std::cout<<"sum of row "<<i+1<<"= "<<sum<<std::endl;
		sum=0;
	}
	sum=0;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			sum=sum+array[j][i];
		}
		std::cout<<"sum of column "<<i+1<<"= "<<sum<<std::endl;
		sum=0;
	}
}
