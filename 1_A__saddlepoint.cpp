#include<iostream>
int main()
{
	int array[10][10];
	int k;
	int min=0,flag;
	int row,column,col1;
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
			min=array[i][0];
			col1=0;
		for(int j=1;j<column;j++)
		{
			if(min>array[i][j])
				{
					min=array[i][j];
					col1=j;
				}
				
		}
	
	for ( k = 0; k < row; k++) 
  
           
            if (min < array[k][col1]) 
                break; 
  
       
      if (k == row) 
        { 
           std::cout << "Value of Saddle Point " << min; 
         
        } 
	}
	

	
}
