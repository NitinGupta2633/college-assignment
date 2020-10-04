#include <iostream>

using namespace std;
class Node
{
    int dat;
    Node* NEX;
    Node* head=NULL;
    bool is_Circular=false;
    int *table=new int[1001];
    Node* NodeTable[1001];
    int N_1=0;
    public:
    int* getTable()
    {
        return table;
    }
    Node()
    {
        for(int i=0;i<1001;i++) {table[i]=0;};
        for(int i=0;i<1001;i++){NodeTable[i]=NULL;}
    }
    
    void i0(int x)
    {
        Node* temp2=new Node;
        temp2->dat=x;
        temp2->NEX=NULL;
        NodeTable[x]=temp2;
        N_1++;
    
        if(head==NULL)
        {
            head=temp2;
            table[head->dat]=0;
            return;
        }
    
        Node* temp=head;
        while(temp->NEX!=NULL)
        {
            temp=temp->NEX;
        }
        temp->NEX=temp2;
    }

    void i1(int y,int x)
    {
        N_1++;
        if(Search(y))
            insafter(y,x);
        else
            insbefore(y,x);
    }
    
    void i2(int x,int y,int z)
    {
       Node* temp2=new Node;
       temp2->dat=z;
       temp2->NEX=NULL;
       NodeTable[z]=temp2;
       int distance=0;
       Node* temp=head;
       while(temp->dat!=x)
       {
        temp=temp->NEX;
       }
       Node* Initial=temp;
       while(temp->dat!=y)
       {
        temp=temp->NEX;
        distance++;
       }
       distance/=2;
       while(distance!=0)
       {
        Initial=Initial->NEX;
        distance--;
       }
       temp2->NEX=Initial->NEX;
       Initial->NEX=temp2;
       N_1++;
    }

    bool Search(int x)
    {
        Node* temp=head;
        while(temp!=NULL)
        {
            if(temp->dat==x)
            {
                return true;
            }
            temp=temp->NEX;
        }
        if(temp==NULL) 
            return false;
    
    }

    void print()
    {
        Node* temp=head;
        while(temp!=NULL)
        {
            cout<<temp->dat<<" ";
            temp=temp->NEX;
        }
    }

    void u(int x,int p)
    {
        if(Search(x)==false)
        {
            return;
        }
        
        Node* temp=NodeTable[x];
    	while(p!=0)
    	{
    		if(temp->NEX==NULL)
    		{ 
    		    temp->NEX=head;
    		    temp=head;
        	    is_Circular=true;
        	    p--;
    		}
    		else
    		{ 
    		    temp=temp->NEX; 
    		    p--;
    		}
        }
    	NodeTable[x]->NEX=temp;
    }
    
    void insbefore(int y,int x)
    {
        Node* temp=new Node;
        temp->dat=y;
        temp->NEX=NULL;
        NodeTable[y]=temp;
    	if(head->dat==x)
    	{
            temp->NEX=head;
            head=temp;
            return;
        }
        Node* temp2=head;
        while(temp2->NEX->dat!=x)
        {
            temp2=temp2->NEX;
        }
        temp->NEX=temp2->NEX;
        temp2->NEX=temp;
    }

    void insafter(int y,int x)
    {
        Node* temp=new Node;
        temp->dat=x;
        temp->NEX=NULL;
        NodeTable[x]=temp;
        Node* temp2=head;
        while(temp2->dat!=y)
        {
            temp2=temp2->NEX;
        }
        temp->NEX=temp2->NEX;
        temp2->NEX=temp;
    }
    
    void Gentable()
    {
        for(int i=1;i<1001;i++)
        {
           if(NodeTable[i]!=NULL)
           {
                if(NodeTable[i]->NEX!=NULL)
                {
                    table[NodeTable[i]->NEX->dat]++;
                }
           }
        }
    }

    void printtable()
    {
        for(int i_1=1;i_1<10;i_1++)
        {
            cout<<i_1<<" "<<table[i_1]<<endl;
        }
    }
    bool circular()
    {
        return is_Circular;
    }
    int len()
    {
        return N_1;
    }
};
int main()
{
    Node A_1;
    int N1;
    cin>>N1;
    char a;
    int b;
    for(int i2=0;i2<N1;i2++)
    {
        cin>>a;
        cin>>b;
        if(a=='I' && b==0)
        {
            int x;
            cin>>x;
            A_1.i0(x);
        }
        else if(a=='I' && b==1)
        {
            int x,y;
            cin>>x>>y;
            A_1.i1(x,y);
        }

        else if(a=='I' && b==2)
        {
            int x,y,z;
            cin>>x>>y>>z;
            A_1.i2(x,y,z);
        }
        else if(a=='U')
        {
            int p;
            cin>>p;
            A_1.u(b,p);
        }
    }
    A_1.Gentable();
    int* ansTable=A_1.getTable();
    int countMultiple=0;
    if(A_1.circular())
        cout<<1<<endl;
    else
        cout<<0<<endl;
    for(int i=1;i<=1000;i++)
    {
        if(ansTable[i]>=2) 
        {
            countMultiple++;
        }
    }
    if(countMultiple==0) 
    { 
        cout<<"0"<<endl; A_1.print();
    }
    else 
    {
            cout<<countMultiple<<endl;
        for(int i=1;i<=1000;i++)
        {
            if(ansTable[i]>=2) cout<<i<<" ";
        }
        cout<<endl;
        for(int i=1;i<=1000;i++)
        {
            if(ansTable[i]>=2) cout<<ansTable[i]<<" ";
        }
    }
    cout<<endl;
}
