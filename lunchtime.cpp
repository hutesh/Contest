#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        ll k;
        cin>>k;
        ll arr[k];
        for(int j=0;j<k;j++)
        {
            cin>>arr[j];
        }
        string s="1";
        for(int j=2;j<=k;j++)
        {
            int m=(k/j);
            if(m*j!=k)
                m++;
            ll last=0,flag=1,p;
            for( p=0;p<m;p++)
                last=last+arr[p];
            while(p!=k)
            {
                int q=p;
                int sum=0;
                for(int l=p;l<q+m;l++)
                   {
                       if(l<k)
                          sum=sum+arr[l];
                       else
                           break;
                   }
                   p=p+j;
                   if(sum==last)
                        continue;
                    else
                    {
                        flag=0;break;
                    }
            }
            if(flag==1)
                s=s+'1';
            else
                s=s+'0';
        }
        cout<<s<<"\n";
    }
    return 0;
}
