#include<iostream>
#include<math.h>
using namespace std;
int x=0;
int main()
{
	int array[6][6];
	int arr[20];
	int m,n,element;
	std::cout<<"enter the no of element a sqaure of matrix"<<std::endl;
	std::cin>>m;
	cout<<"enter element of matrix"<<endl;	
	for(int i=0;i<m;i++)
	{
		cin>>arr[i];
	}
		cout<<"displaying element in spiral form"<<endl;
		n=sqrt(m);
		m=n;
	int b=m-1,l=0,t=0,r=n-1;
	int dir=0;
	while(t<=b&&l<=r)
	{
		if(dir==0)
		{
			for(int i=l;i<=r;i++)
			{
			array[t][i]=arr[x];
			x++;
			}
			t++;
			dir=1;
		}
		else if(dir==1)
		{
			for(int i=t;i<=b;i++)
			{
				array[i][r]=arr[x];
				x++;
			}
			r--;
			dir=2;
		}
		else if(dir==2)
		{
			for(int i=r;i>=l;i--)
			{
				array[b][i]=arr[x];
				x++;
			}
			b--;
			dir=3;
		}
		else if(dir==3)
		{
			for(int i=b;i>=t;i--)
			{
				array[i][l]=arr[x];
				x++;
			}
			l++;
			dir=0;
		}
	}
	
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<array[i][j]<<" ";
		}
		cout<<"\n";
	}
}


