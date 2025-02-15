#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define pii pair<int,int>
const int N = 1e6 + 5;
using namespace std;
int a[N];
int d[N];
pii p[N];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    freopen("CAU2.INP","r",stdin);
    freopen("CAU2.OUT","w",stdout);
    int n;
    cin>>n;
    for (int i = 1 ;i <= n ;i++)
	{
	    cin>>a[i];
	    p[i].fi = a[i];
	    p[i].se =  i;
	}
	sort(p+1,p+1+n);
	ll cnt = 1;
	d[1] = 1;
	for (int i = 2 ; i <= n; i++)
	{
		if(p[i].se > p[i - 1].se) d[i] = d[i - 1] + 1;
		else d[i] = 1;
		if(d[i]==1) cnt++;
	}
	cout<<cnt;
    return 0;
}
