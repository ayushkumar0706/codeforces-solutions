#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
   while(t--){
        int n,k;
        cin>>n>>k;
        vector<long long >a;
        vector<long long >b;

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        for(int i=0;i<n;i++){
            cin>>b[i];
        }

        unordered_set<int> st;
        int sum=0,count=0;
        for(int i=0;i<n;i++)
        {
            if(b[i]!=-1) 
            {
                count++;
                st.insert(a[i]+b[i]);
                sum = a[i]+b[i];
            }
        }

        if(st.size() > 1) 
        {
            cout<<0<<endl;
            continue;
        }

        int cnt = 0;
        
        if(count != 0)
        {
            for(int i=0;i<n;i++)
            {
                int req=sum-a[i];
                if(sum<a[i] || req>k) 
                {
                    cnt = 1;
                    break;
                }
            }
        }
        else if(count==0)
        {
            int mini=*min_element(a.begin(),a.end());
            int maxi=*max_element(a.begin(),a.end());
            mini += k;
     
            cout<<abs(mini-maxi)+1<<endl;
            continue;
        }
        if(cnt==1)
        cout<<0<<endl;
        else
        cout<<1<<endl;
    }   
}
