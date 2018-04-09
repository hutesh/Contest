#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n];
    int num[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
        cin>>num[i];

    int first=100009;
    int sec=100009;
    int thi=100009;
    for(int i=0;i<n;i++)
    {
        if(num[i]==1)
        {
            if(first>arr[i])
                first=arr[i];
        }
        else if(num[i]==2)
        {
            if(sec>arr[i])
                sec=arr[i];
        }
        else
        {
            if(thi>arr[i])
                thi=arr[i];
        }
    }
    int p=min(first+sec,thi);
    cout<<p<<"\n";
    return 0;
}
