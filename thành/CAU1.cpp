#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
const int N = 1e6 + 5;
using namespace std;
ll gcd(ll a, ll b)
{
    while (b != 0)
    {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("CAU1.INP","r",stdin);
    freopen("CAU1.OUT","w",stdout);
    ll n,a,b,x;
    cin>>n>>a>>b;
    if(a>b)
    {
    	x = b * (a / gcd(a,b));
	}
	else  x = a * (b / gcd(a,b));
    cout<<n/x;
    return 0;
}
