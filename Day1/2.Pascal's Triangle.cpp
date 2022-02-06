#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define s(v)       sort(v.begin(),v.end())
#define r(v)       reverse(v.begin(),v.end())
#define pf         printf
#define sf         scanf
#define pb         push_back
#define GCD(x,y)   __gcd(x, y)
#define ll         long long
#define lld        long double
#define vs         v.size()
#define ss         s.size()
#define ff         first
#define sd         second
#define mp         make_pair
#define py         cout<<"YES"<<endl;
#define pn         cout<<"NO"<<endl;
#define ii         pair<int, int>
using namespace std;
vector<vector<int>> oacm(int n){
     int n=numRows;
      vector<vector<int>>ans(n);
    if(n==1){
        ans[0].push_back(1);
        return ans;
    }
    if(n==2){
        ans[0].push_back(1);
        ans[1].push_back(1);
        ans[1].push_back(1);
        return ans;
    }
    else{
        vector<int>v;
        ans[0].push_back(1);
        ans[1].push_back(1);
        ans[1].push_back(1);
        v.push_back(1);
        v.push_back(1);
        n-=2;
        int k=2;
        while(n--){
            ans[k].push_back(1);
            vector<int>vv=v;
            int len=v.size();
            for(int i=1;i<len;i++){
                ans[k].push_back(v[i-1]+v[i]);
                vv[i]=v[i-1]+v[i];
            }
            ans[k].push_back(1);
            vv.push_back(1);
            v.clear();
            v=vv;
            k++;
        }
        return ans;
    }

}

int main(){
    int n;
    cin>>n;

    vector<vector<int>>v=oacm( n);
    cout<<"ok"<<endl;
    for(int i=0;i<n;i++){
        int len=v[i].size();
        for(int j=0;j<len;j++) cout<<v[i][j]<<" ";
        cout<<endl;
    }
}