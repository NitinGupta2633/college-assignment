#include<iostream>
using namespace std;
void deleteElement(int a[],int n,int j){
    for(int i=j;i<n;i++){
        a[i]=a[i+1];
    }
}

int main()
{
    cout<<"Enter size of Array to be created";
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"value at index "<<i<<" ";
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                deleteElement(a,n,j);
                n=n-1;
            }
        }
    }
}

