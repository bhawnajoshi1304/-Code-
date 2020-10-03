/*
Problem Description
We have to find a permutation for integers 1 to N such that BITWISE AND of all adjacent numbers is not 0.
If no such permutation is possible than print -1.

Solution Approach
Numbers of the form 2^n have only one set bit at a position which is 0 for all smaller numbers. 
Hence when N is of the form 2^k where k>0 no permutation exists and answer is -1.
Place of 2^k and 2^k+1 needs to be switched whenever they occur in permutation.
However for N >= 5 the order needs to be changed a bit as: 2 3 1 5 4
Time Complexity: O(n)
Space Complexity: O(1)
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
        cin>>n;
        float x=log2(n);
        if(n==1)
        cout<<1;
        else if(x==floor(x))
        cout<<"-1";
        else if(n<=5)
        {
            if(n==1)
            cout<<"1";
            else if(n==3)
            cout<<"1 3 2";
            else 
            cout<<"2 3 1 5 4";
        }
        else{
            cout<<"2 3 1 5 4 ";
            int x=4;
            for(int i=6;i<=n;i++){  
                if(i==x*2)
                {
                    x*=2;
                    cout<<x+1<<" "<<x<<" ";
                    i+=1;
                }  
            else
            cout<<i<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}