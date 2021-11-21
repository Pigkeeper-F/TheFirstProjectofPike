#include<iostream>
using namespace std;
int main()
{
    int n,k,*p,consume,q=0;
    p=new int [k+1];
    p[k+1]=n+1;
    for(int i=0;i<=k;i++)
    {
        cin>>p[i];
    }
    for(int i=k;i>=0;i--)
    {
        if(p[i]<n)
        {
            cout<<"No Solution!";
            return 0;
        }
    }
    for(int i=0;i<k;)
    {
        int j=1;
        consume=n;
        while(j)
        {
            if(consume>0)
            {
                consume-=p[i];
                i++;
            }
            else
            {
                j=0;
                i--;
                q++;
            }
                
        }
        
    }

    return q-1;
}