#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string s;
        cin>>s;
        int l=s.length();
        int K;
        cin>>K;
        int ans=0;
        for(int j=0;j<l;j++)
        {
            int arr[26]={0};
            for(int k=j;k<l;k++)
            {
                arr[s[k]-'a']++;
                int t=-1,count=0,flag=0;
                int total=k-j+1;

                for(int h=0;h<26;h++)
                    {
                        if(arr[h]!=0&&t==-1)
                        {
                            t=arr[h];
                            count++;
                        }
                        else if(arr[h]!=0)
                        {
                            if(arr[h]!=t)
                            {
                                flag=1;
                                break;
                            }
                            else
                                count++;
                        }
                    }

                    if(flag==0)
                    {
                            if(count>=K)
                                  flag=0;
                            else
                                flag=1;
                    }

                  if(flag==0)
                    ans++;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
