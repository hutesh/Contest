
#include <bits/stdc++.h>
using namespace std;
int maxXorSum(int n, int k)
{
    if (k == 1)
        return n;
    int res = 1;
    while (res <= n)
        res <<= 1;

    return res - 1;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
    int n,k;
    cin>>n>>k;
    int ans=maxXorSum(k,n);
   // cout<<ans<<" ans is \n";
    if(n==1)
        cout<<k;
    else if(n==2)
        cout<<k-1<<" "<<~k+pow(2,floor(log2(k))+1)+1;
    else
    {

        if(k<ans)
        {
            //cout<<"here";
            if(n%2!=0)
            {

              cout<<"1 ";
              cout<<k<<" ";
              int p=(1^k);

              cout<<~p+pow(2,floor(log2(p))+1)<<" ";
              if(n>3)
              {
                  for(int j=4;j<=n;j++)
                    cout<<k<<" ";
              }
            }
            else
            {
                 cout<<k<<" "<<~k+pow(2,floor(log2(k))+1)<<" ";
                 for(int j=3;j<=n;j++)
                    cout<<k<<" ";
            }
        }
        else if(k==ans)
        {
             if(n%2==0)
             {
                cout<<"1"<<" "<<k-1<<" ";
                 for(int j=3;j<=n;j++)
                    cout<<k<<" ";
             }
             else
             {
                 for(int j=1;j<=n;j++)
                    cout<<k<<" ";
             }
        }
    }
    cout<<"\n";
}
    return 0;
}
