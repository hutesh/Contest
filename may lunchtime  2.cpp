#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {

       int n;
       cin>>n;
       int arr[n][n];
       for(int j=0;j<n;j++)
         for(int k=0;k<n;k++)
            cin>>arr[j][k];
       int maxi=-1;
       for(int j=0;j<n;j++)
       {
         for(int k=0;k<n;k++)
         {
              int sum=0;
              while(j<n&&k<n)
              {
                  sum=sum+arr[j][k];
                  j++;
                  k++;
              }
              maxi=max(sum,maxi);
         }
       }
       cout<<maxi<<"\n";
    }
       return 0;
    }
