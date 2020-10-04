#include<iostream>
using namespace std;

void FindMissingElement(int *arr, int size)
{
	int constant = 1;
	int diff;
	
	for(int i =0; i<size-1; i++)
	{
		int diff = arr[i+1] - arr[i];
		if(diff != constant && diff!=0)
		{
			int j = 1;
			while(diff != 1)
			{
				cout<<arr[i] + j<<" ";
				j++;
				diff--;
			}
		}
	}
	cout<<endl;
}

int main()
{
	int arr[100];
	int size;
	std::cout<<"enter size of array"<<std::endl;
	std::cin>>size;
	std::cout<<"enter the elements"<<std::endl;
	for(int j=0;j<size;j++)
	{
		std::cin>>arr[j];
	}
	
	cout<<"Array"<<endl;
	for(int i = 0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	cout<<"Missing Element"<<endl;
	FindMissingElement(arr,size);
}
