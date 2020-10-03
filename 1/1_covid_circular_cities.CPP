/*
Problem Description:
A group of N cities exist in form of circle with cities ranging from 0 to N-1.
We are given 4 integers N, K, X, Y. 
Where   N is number of cities, 
        K is the number such that if A city has corona virus than corona virus will spread to city (A+K)%N
        X is the city which initially has corona virus. 
        Y is our city where we have to find weather our city will have corona virus in the future or not.

Solution approach
We create an array of size N, such that 0 value at an index represents absence of corona virus in that city and 1 indicates it's presence. 
Starting from the city X we iteratively update corona status of (X+K)%N city until we reach a city which already has corona or we reach the city Y.
Finally we check the status of the Y city and print the desired output "YES" or "NO".
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
        int n,k,x,y;
        cin>>n>>k>>x>>y;
        vi a(n,0);
        a[x]=1;
        while(true){
            if(a[(x+k)%n]==1)
            break;
            else 
            a[(x+k)%n]=1;
            if((x+k)%n==y)
            break;
            x=(x+k)%n;
        }
        if(a[y]==0)
        cout<<"NO"<<"\n";
        else 
        cout<<"YES"<<"\n";
    }
    return 0;
}