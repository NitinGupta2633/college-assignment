#include<iostream>
int main()
{
	int array[5][5]={0};
	int row,column;
	std::cout<<"enter the row of column"<<std::endl;
	std::cin>>row>>column;
	std::cout<<"enter the element"<<std::endl;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			std::cin>>array[i][j];
		}
	}
	//checking for saddle point 
	int row_min=array[0][0],x=0,flag=0;
	for(int i=0;i<row;i++)
	{
			std::cout<<"test1"<<std::endl;
		for(int j=0;j<column;j++)
		{			
		if(row_min>array[i][j])
		{
			row_min=array[i][j];
		
		for(int k=0;k<row;k++)
		{
			if(row_min>array[k][j])
			{
				flag++;
			}
		}
			std::cout<<"test1"<<std::endl;
		}
		row_min=array[i][j];
		}
	
	}
	if(flag==row-1)
	{
		std::cout<<"saddle point in the matrix"<<std::endl;
	
	}
	
}
