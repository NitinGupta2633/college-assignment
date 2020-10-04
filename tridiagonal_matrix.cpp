#include<iostream>
using namespace std;
int main()
{   
    cout<<"Enter elements"<<endl;
	int a[10];
	for(int i=0;i<10;i++)
	{
	  cin>>a[i];
	}
	cout<<"Tri-diagonal Matrix \n";
	int x=0;
		for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			
		if(i==j || i==j-1 || i==j+1)
		cout<<a[x++]<<" ";
		else
		cout<<0<<" ";
		}
		cout<<endl;
	}
}
