#include<iostream>
using namespace std;
int** create(int a, int b, int arr[][4])
{
	int i,j;
	int count=0;	
	cout<<"Enter element rowise"<<endl;
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			cout<<"Enter element of index ["<<i<<","<<j<<"]"<<endl;
			cin>>arr[i][j];
		}
	}
	int A[count][3];
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			if(arr[i][j]!=0)
			{
				int n=0;
				A[n][0]=i;
				A[n][1]=j;
				A[n][2]=arr[i][j];
				count++;
				n++;
			}
		
		}
	}
	return A;
}
int main()
{
   int arr[5][4];
arr=create(5,4,arr);
}
