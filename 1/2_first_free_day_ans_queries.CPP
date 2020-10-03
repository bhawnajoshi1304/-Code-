/*
Problem Description
Chef started maintining a website and accepts queries for N days and can answer maximum of K queries a day.
Number of Queries asked each day is provided in form of integer array.
If a query is not answered a day it is answered on the next day.
We have to find the first day when chef is free(i.e. when he answers less than K queries)

Solution Approach
We iterate over queries each day and see if chef is free on a particular day simultaneously updating the queries pending from the last day.
Whenever we find a free day we return the day value.
Else after iterating over queries of all days we calculate number of days chef needs to work to respond to the pending queries.
Time Complexity: O(n)
Space Complexity: O(n)
*/

#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef vector<vi> vvi;
typedef vector<string> vs;
typedef pair<int,int> ii;
#define sz(a) int((a).size())
#define pb push_back
#define all(c) c.begin(),c.end()
#define tr(container,it) for(typeof(container.begin()) it=container.begin();it!=container.end();it++)
#define present(c,x) (c.find(x)!=c.end())
#define cpresent(c,x) (find(all(c),x)!=c.end())
#define fr(i,n) for(int i=0;i<n;i++)

void fastscan(int &x)
    {
        bool neg=false;
        register int c;
        x =0;
        c=getchar();
        if(c=='-')
        {
            neg = true;
            c=getchar();
        }
        for(;(c>47 && c<58);c=getchar())
            x = (x<<1) + (x<<3) +c -48;
        if(neg)
            x *=-1;
        if(c==' ')
        return;
    }

int main()
{
    ll t;
    cin>>t;
    for(ll a0=0;a0<t;a0++){
        int n,k;
        cin>>n>>k;
        vector<ll> l(n);
        fr(i,n)
        cin>>l[i];
        ll ans=0,count=0;
        fr(i,n)
        {
            if(l[i]+ans<k)
            break;
            ans=l[i]+ans-k;
            count+=1;
        }
        count+=(1+floor(ans/k));
        cout<<count<<"\n";
    }
    return 0;
}