#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#include <bits/stdc++.h>
using namespace std;
#define FAST  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long int 
#define ar array
#define pb push_back
#define fi(a,b) for(int i=a;i<(b);i++)
#define fj(a,b) for(int j=a;j<(b);j++)
#define fk(a,b) for(int k=a;k<(b);k++)
#define lb lower_bound
#define ub upper_bound
//hash base 177013

const int INF=1000000000+7;

int main()
{
	FAST;
	//#ifndef ONLINE_JUDGE
	//	freopen("input.txt","r",stdin);
	//	freopen("output.txt","w",stdout);
	//#endif
	//ll testcase;
	//cin>>testcase;
	//while(testcase--)
	{
		int n,w;
		cin>>n>>w;
		ll a[n][2];
		fi(0,n)
		{
			cin>>a[i][0]>>a[i][1];
		}
		ll dp[w+2];
		fi(0,w+1)
		{
			dp[i]=-INF;
		}
		dp[0]=0;
		fi(0,n)
		{
			for(int j=w;j>=0;j--)
			{
				if(j-a[i][0]>=0)
				{
					dp[j]=max(dp[j],dp[j-a[i][0]]+a[i][1]);
				}
			}
		}
		ll ans=0;
		fi(0,w+1)
		{
			ans=max(ans,dp[i]);
		}
		cout<<ans;
	}
}
