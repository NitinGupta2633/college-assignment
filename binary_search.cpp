#include<iostream>
int main()
{
	int array[100],x,y;
	std::cout<<"enter the number of element  "<<std::endl;
	std::cin>>x;
	std::cout<<"enter the elements in sorted order"<<std::endl;
	for(int i=0;i<x;i++)
	{
		std::cin>>y;
		array[i]=y;
	}
	int z;
	std::cout<<"enter the element you want ot find"<<std::endl;
	std::cin>>z;
	
	int low,high,mid,flag=0;
	low=0;
	high=x-1;
	mid=(low+high)/2;
	while(high>=low)
	{
		if(array[mid]==z)
		{
						
		//	std::cout<<"test0"<<std::endl;
			flag=1;
			break;
		}
		else if(array[mid]>z)
		{
			high=mid-1;
			mid=(high+low)/2;				
		//	std::cout<<"test1"<<std::endl;

		}	
		else if(array[mid]<z)
		{
			low=mid+1;
			mid=(high+low)/2;
						
		//	std::cout<<"test2"<<std::endl;
		}
	}
	if(flag==1)
	{
		std::cout<<"element is in the array at index "<<mid<<std::endl;
		
	}
	else if(flag==0)
	{
		std::cout<<"element is not in the array"<<std::endl;
	}
}
