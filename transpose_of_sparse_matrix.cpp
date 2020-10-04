#include<iostream>
int main()
{
	int row[20],col[20],element[20],size;
	std::cout<<"enter number of element of sprax matrix"<<std::endl;
	std::cin>>size;
	std::cout<<"enter the following details in increasing order of row and coloumn\n\nRow 	coloumn		value"<<std::endl;
	for(int i=0;i<size;i++)
	{
		std::cin>>row[i]>>col[i]>>element[i];
	}
	std::cout<<"after taking tranpose "<<std::endl;
	std::cout<<"Row		column		element"<<std::endl;
		for(int j=0;j<size;j++)
		{
			std::cout<<col[j]<<"		"<<row[j]<<"		"<<element[j]<<std::endl;
		}
	
}

