#include<iostream>
using namespace std;
int main()
{
	int r1,r2,c1,c2,k;
	int mat1[5][5],mat2[5][5],mat3[5][5]={0};
	std::cout<<"enter the number of row and column of first matrix"<<std::endl;
	std::cin>>r1>>c1;
	std::cout<<"enter the number of row and column of second matrix"<<std::endl;
	std::cin>>r2>>c2;
	if(c1==r2)
	{
		std::cout<<"multiplication is possible"<<std::endl;
	}
	else
	{
		std::cout<<"multiplication is possible"<<std::endl;	
	}
	int element;
	std::cout<<"enter the element of first matrix"<<std::endl;
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			std::cin>>element;
			mat1[i][j]=element;
		}
	}
		std::cout<<"enter the element of second matrix"<<std::endl;
	for(int i=0;i<r2;i++)
	{
		for(int j=0;j<c2;j++)
		{
			std::cin>>element;
			mat2[i][j]=element;
		}
	}
	 for(int i = 0; i < r1; ++i)
	 {
	 
        for(int j = 0; j < c2; ++j)
  {
  
            for(k = 0; k < c1; ++k)
            {
                mat3[i][j] += mat1[i][k] * mat2[k][j];
            }
	
}
}

for(int i=0;i<r1;i++)
{
	for(int j=0;j<c2;j++)
	{
		std::cout<<mat3[i][j]<<"  ";
	}
	std::cout<<"\n";
}
	
	
}
