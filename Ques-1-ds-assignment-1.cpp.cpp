#include<iostream>
using namespace std;
int main()
{
	int array[100],arr1[100];
	std::cout<<"enter the size of array to created"<<std::endl;
	int size;
	std::cin>>size;
	int element;
	std::cout<<"enter the element"<<std::endl;
	for(int i=0;i<size;i++)
	{
		std::cin>>element;
		array[i]=element;	
	}
	int k=1;
	std::cout<<"after deletion of duplicate element"<<std::endl;
	for(int i=0;i<size;i++)
	{
		for(int j=k;j<size;j++)
		{
			if(array[i]==array[j])
			{
				if(j>i)
				{
					for(int n=j;n<size;n++)
					{
						array[n]=array[n+1];
					}
					size--;
				}
			}
		}
		k++;
	}
	for(int i=0;i<size;i++)
	{
		std::cout<<array[i]<<std::endl;
	}
}

