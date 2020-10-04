#include<iostream>
int main()
{
	std::cout<<" \t\t\t\tprogram for diagonal matrix\n\n"<<std::endl;
	int array[20];
	std::cout<<"\n\nNote: for a diagonal matrix it has to be a sqaure matrix :"<<std::endl;
	int size=0;
	std::cout<<"enter the size of matrix"<<std::endl;
	std::cin>>size;
	std::cout<<"enter diagonal element of the matrix"<<std::endl;
	for(int i=0;i<size;i++)
	{
		std::cin>>array[i];
	}
	std::cout<<"enter diagonal element are as follows"<<std::endl;
	for(int i=0;i<size;i++)
	{
		std::cout<<array[i]<<std::endl;
	}
	std::cout<<"matrix :\n"<<std::endl;
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			if(i==j)
			{
				std::cout<<array[i]<<" ";
			}
			else
			{
			
			std::cout<<"0 ";
	    	}
		}
			std::cout<<"\n";
	}
}
