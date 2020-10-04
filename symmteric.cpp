#include<iostream>
int main()
{
	int array[10][10],tran[10][10];
	int size,flag;
	std::cout<<"enter the size of sqaure matrix"<<std::endl;
	std::cin>>size;
	std::cout<<"enter the element"<<std::endl;
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			std::cin>>array[i][j];
		}
	}
	std::cout<<"displaying matrix"<<std::endl;
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			std::cout<<array[i][j]<<" ";
		}
		std::cout<<"\n";
	}
		std::cout<<"after taking transpose matrix"<<std::endl;
for(int i=0;i<size;i++)
{
	for(int j=0;j<size;j++)
	{
		tran[i][j]=array[j][i];
	}
}
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			std::cout<<tran[i][j]<<" ";
		}
		std::cout<<"\n";
	}
	std::cout<<"checking for symmetric or non symmetric"<<std::endl;
	
		for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			if(tran[i][j]==array[i][j])
			{
				flag++;
			}
		}
		
	}
	if(flag==size*size)
	{
		std::cout<<"matrix is symmetric";
	}
	else
	{
		std::cout<<"matrix is not symmteric"<<std::endl;
	}
}
