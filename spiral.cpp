#include<iostream>
using namespace std;

int main()
{
	int array[6][6];
	int m,n,element;
	std::cout<<"enter the dimension of matrix"<<std::endl;
	std::cin>>m>>n;
	cout<<"enter element of matrix"<<endl;	
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>element;
		array[i][j]=element;
		}
	}
		cout<<"displaying element in spiral form"<<endl;
	
	int b=m-1,l=0,t=0,r=n-1;
	int dir=0;
	while(t<=b&&l<=r)
	{
		if(dir==0)
		{
			for(int i=l;i<=r;i++)
			{
				cout<<array[t][i]<<" ";
			}
			t++;
			dir=1;
		}
		else if(dir==1)
		{
			for(int i=t;i<=b;i++)
			{
				cout<<array[i][r]<<" ";
			}
			r--;
			dir=2;
		}
		else if(dir==2)
		{
			for(int i=r;i>=l;i--)
			{
				cout<<array[b][i]<<" ";
			}
			b--;
			dir=3;
		}
		else if(dir==3)
		{
			for(int i=b;i>=t;i--)
			{
				cout<<array[i][l]<<" ";
			}
			l++;
			dir=0;
		}
	}
}


